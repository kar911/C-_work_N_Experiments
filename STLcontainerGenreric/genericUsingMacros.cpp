#include <iostream>
#define squr(a) (a*a)
#define pi 3.14 // constant
//#define squr() ("sdsad") // this also works  a single string can be shared
using namespace std;
int main()
{
   // in define squr(a) // this is function  name with parameter a
   // and (a*a) //  this is body for the function 
   cout<<100/squr(5)<<endl;
   cout<<squr(12.4)<<endl;
//    cout<<squr("d")<<endl; // gives invalid operation
//cout<<squr(); // if we send no arg then  it is rais warning
   cout<<pi;
   cout<<endl;
	return 0;
}
