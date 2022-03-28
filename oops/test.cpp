#include<iostream>
#include "testhead.h" // here the function for Acunt is declaredafter prototype
int Acunt::getx(){
        return x;
        }
void Acunt::setx(int xd){
    x=xd;
    }
Acunt::Acunt(){
    std::cout<<"hello";
    }
Acunt::~Acunt(){
    std::cout<<"yo bye.";
    }
    
//    Acunt::Acunt(int h){
//    x=13
//    std::cout<<"hello"<<h;
//    }


// default perameter constructor can be be used to get rid of code 
// when it is not good and to free compiler's work 
    Acunt::Acunt(int h=1,int j=2):x{h},y{j}{ //efficent to use this than uper for x intialization
    std::cout<<"hello other"<<h<<"and"<<j<<std::endl; // it is wasting of time if u initialize at the declaration 
    }


//deligate contructor    
    Acunt::Acunt(int h):Acunt{h,0}{ //efficent to use this than 'upper' for x intialization (upper line 16th)
    std::cout<<"hello deligate"<<h<<std::endl; // it is wasting of time if u initialize at the declaration 
    }
