#include <iostream>
#include "head.h"
#include "next1.h"
using namespace std;
int main()
{
//    if we have a class instance variable labled as private
//    and a class is derived by that can inherti the private
//    but cant use
    
//    int d=133;
////    d=;
//    cout<<INT8_MAX<<d;
    B b{13};
    B a{b};
    B g{14};
    a=g;
   a.show_i();
   a.set_i();
   b.set_j();
   b.show_j();
   b.show_i();
   a.show_i(); 
   a.show_j();
    cout<<"\n";
	return 0;
}
 