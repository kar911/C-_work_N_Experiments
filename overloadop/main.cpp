#include <iostream>
#include "head.h"
using namespace std;

// these can't be overloaded 
// :? , :: ,  . ,sizeof ,  .* (pointer to  member)


int main()
{
    Mystr emp;
    Mystr smp1 {"KAR"};
    Mystr smp2 {"tik"};
    Mystr smp3 {smp1};
    cout<<boolalpha<<(smp3==smp2)<<endl;
    
//    emp=-smp1;
//    emp.display();
//    emp=smp1+smp2;
    emp.display();
    cout<<"enter emp again ";
    cin>>emp;
    cout<<"overlad"<<smp2 << emp<<endl;
//    ++emp;
    emp.display();
//    smp1.display();
//    smp2.display();
//	smp3.display();
    cout<<endl;
	return 0;
}
