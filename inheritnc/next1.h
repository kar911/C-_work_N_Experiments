#ifndef _NEXT1_H_
#define _NEXT1_H_
#include "head.h"
class B : public A{
    // to see use coment the B(int ) 
    using A::A;//  it will call  the  A constructor ans initialize the i of A by B object 
// it is not good for use   
public:
    int j;
    B();
    B(int i);
    B(const B &b);
    B &operator=(const B &rhs);
    void show_j();
//    void show_i();
     void set_j();
    };
#endif