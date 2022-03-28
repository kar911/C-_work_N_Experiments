#include "head.h"
#include<iostream>

void A::set_i(){
    std::cin>>i;
    }
    A::A(int i):i{i}{
        std::cout<<"construct call A  arg\n";
        }
    A::A():i{0}{
     std::cout<<"consrautor A no arg\n";
     }
   void A::show_i(){
    std::cout<<i;
    }
    A::A(const A &b):i{b.i}{
     std::cout<<"soft copy A \n";
     }
   A &A::operator=(const A &rhs){
       std::cout<<"ops A \n";
       if(this == &rhs)
           return *this;
        i=rhs.i;
        return *this;
       }