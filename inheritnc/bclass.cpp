#include "next1.h"
#include<iostream>
void B::set_j(){
    std::cin>>j;
    }
//void B::show_i(){
//    std::cout<<i;
//    }   
//                                  | this is calling the the copy const of A as we pass anotheer 
//                                 \/   object ther 'b' 
 B::B(const B &b):A(b),j{b.j}{
     std::cout<<"copy B \n";
     }
  B &B::operator=(const B &rhs){
       std::cout<<"ops B \n";
       if(this == &rhs)
           return *this;
        A::operator=(rhs); //here we ARE doing  slicing of arguments as rhs has i,j the first 
        //  i is passed to A's = ops and then down there we handle with j
        j=rhs.j;
        return *this;
       }

//               | this is calling the the no arg construct of A as we pass no argument 
//              \/ 
 B::B():A(),j{0}{
     std::cout<<"consrautor B  no args\n";
     }
//                    | this is calling the the one arg construct of A as we l as one argument 
//                   \/   
B::B(int l):A(l),j{l}{
     std::cout<<"consrautor B   args\n";
     } 
  void B::show_j(){
    std::cout<<j;
    }