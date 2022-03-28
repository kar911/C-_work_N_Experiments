#include<iostream>
using std::cout; 
/*used for specify the cout we using to namespace
 * using the std::cin as cin not works as not declare
 * rather to use the full name space use
 * " using namespace std; "
 * */
 template <typename T,typename g> // dynamic type naming sort of
 // T and g are data types
 // template is used for creating no call data type 
 void f(T c,g h){
     cout<<c<<h<<std::endl;
     }
 
int main(){
   int i= 0;
   cout<<"enter the number :";
   std::cin>>i;
   cout<<"hello "<<i<<"kartik"<<std::endl;
   f("dsadasd");
   f(13);
   f(13.4443);
   f('d');
f(12,"dasds");
int x=68;
void* p;
p=&x;
cout<<*((int*)p)<<'\n';// type cast it to int
cout<<*((char*)p)<<'\n';// type cast it to char
cout<<*((float*)p)<<'\n';// type cast to flaot //not good  in this situation

int a[]{1,2,23};
int b[]{3,4};
int* g[]{a,b}; // array are use as pointer to stack memory
for(int* h:g){ //array are use as pointer to stack memory
   for ()
       }

int ll[][2] {{1,2},{3,3}};
for(int *h:ll){
       cout<<h[0]<<h[1]<<std::endl;
   }
int d=10;
string f;
f.s
    return 0;
    }