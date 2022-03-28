#include<iostream>
#include<exception>
using namespace std;

class Sh : public std::exception{
public:
    Sh() noexcept=default; // noexcept is use to tell that this function can not 
    // throw exception never to asure that we use noexcept 
    virtual const char  *what() const noexcept{
        return "return error";
        }
        ~Sh()=default;
    };
    class BadLengthException:public std::exception { // for taking any and print
    private:
    string s;
    public:
    BadLengthException(int n) noexcept{
        s=to_string(n);
    }
    virtual const char *what() const noexcept{
        return s.c_str();
    }
    ~BadLengthException()=default;
};
    
int main(){
   try{
       Sh a;
       throw Sh{};
       }
       catch(const  Sh &ex){
           cout<<ex.what()<<endl;
           }
   cout<<endl;
   }