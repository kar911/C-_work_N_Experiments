#include<cstring>
#include<iostream>
#include "head.h"
    
    Mystr :: Mystr ()
:str(nullptr)
{
    str=new char [1];
    *str='\0';
    std::cout<<"1st construct"<<std::endl;
    }
    
    
Mystr :: Mystr (const char *s)
:str(nullptr)
{
    if(s==nullptr){// incase some one send nullptr here
        str=new char[1];
        *str='\0';
        std::cout<<"sended nullptr"<<std::endl;
        }
    else{
        str=new char [std::strlen(s) +1];
        std::strcpy(str,s);
        }
    std::cout<<"overload construct"<<std::endl;
    }
////                                                               |
////                                                            \/-- temp obj
//    Mystr &Mystr::operator=(const Mystr &rhs){ here we are  doing delete then copy
//        std::cout<<"copy operator"<<std::endl;
//        if (this == &rhs)
//            return *this;
//        delete [] str; //this can also be typed as this->str OR *this.str
//        str=new char [std::strlen(rhs.str)+1];
//        std::strcpy(str,rhs.str); //str  is  this->str
//        return *this;
//        }
    
    // move is always used used with  R value refference and raw pointer
    Mystr &Mystr::operator=(Mystr &&rhs){ //here we are  doing delete then copy
        std::cout<<"copy operator"<<std::endl;
        if (this == &rhs)
            return *this;
        delete [] str;//this can also be typed as this->str OR *this.str
        str=rhs.str;
        rhs.str=nullptr;//str  is  this->str
        return *this;
        }
        
        Mystr Mystr::operator-() const{
            char *buff=new char[std::strlen(str)+1];
            std::strcpy(buff,str);
            for (size_t i=0;i<std::strlen(str);++i)
                buff[i]=std::tolower(buff[i]);
            Mystr temp {buff};
            delete [] buff;
            return temp;
            }
            
//            Mystr Mystr::operator ++() {
//            char *buff=new char[std::strlen(str)+1];
//            std::strcpy(buff,str);
//            for (size_t i=0;i<std::strlen(str);++i)
//                buff[i]=std::toupper(buff[i]);
//            Mystr temp {buff};
//            delete [] buff;
//            return temp;
//            }

//// unstable right now
//        void Mystr::operator ++() {
//            char *buff=new char[std::strlen(str)+1];
//            std::strcpy(buff,str);
//            for (size_t i=0;i<std::strlen(str);++i)
//                buff[i]=std::toupper(buff[i]);
//            this->str=buff;
//            buff=nullptr;
//            delete [] buff;
//            }

//bool Mystr::operator==(const Mystr &rhs) const{ // comparision
//         if(std::strcmp(str,rhs.str)== 0)
//             return  true;
//        else
//            return false;
//         }
    Mystr :: Mystr (const Mystr &sc)
:str(nullptr)
{
    str=new char [std::strlen(sc.str)+1];
    std::strcpy(str,sc.str);
    std::cout<<"deep copied obj"<<std::endl;
    }
    
Mystr :: ~Mystr (){
    delete [] str;
    std::cout<<"destroyed obj"<<std::endl;
    }
    
    void Mystr ::display() const{
    std::cout<<str<<":"<<getl()<<std::endl;
        }
     int Mystr ::getl() const{
     return std::strlen(str);
         }
     const char *Mystr ::getstr() const{
         return str;
         }
         
         bool operator==(const Mystr &lhs,const Mystr &rhs){  // non member functions for compare
        return (std::strcmp(lhs.str,rhs.str)==0);
    }
    
    Mystr operator+(const Mystr &lhs,const Mystr &rhs){  // non member functions for concat
        char *buff=new char [std::strlen(lhs.str)+std::strlen(rhs.str)+1];
        std::strcpy(buff,lhs.str);
        std::strcat(buff,rhs.str);
        Mystr temp {buff};
        delete [] buff;
        return temp;
        }
        
        std::ostream &operator<<(std::ostream &os,const Mystr &rhs){
            os<<rhs.str;
            return os;
            }
        std::istream &operator>>(std::istream &in,Mystr &rhs){
            char *buff=new char [10];
            in>>buff;
            rhs=Mystr{buff}; // move const
            delete [] buff; //must delete the buff
            return in;
            }