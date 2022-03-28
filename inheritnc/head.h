#ifndef _HEAD_H_
#define _HEAD_H_
class A{
public:
A(int i);
A();
A(const A &a);
    A &operator=(const A &rhs);
    int i;
    void show_i();
    void set_i();
    };
#endif