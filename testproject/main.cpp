#include <iostream>
#include<cctype>
#include<cmath>
using namespace std;
int* in(){
    cout<<"enter the 5 number:\n";
    static int d [5];
    for(int i=0;i<5;++i)
        cin>>d[i];
    return d;
    }
//void factorial(){
//    int* p=in();
//    int fac=1;
//    for(int a:p)
//        fac*=a;
//    cout<<"factorial is "<<fac<<endl;
//    }
void add(){
    int* p=in();
    int sum=0;
    for(int i=0;i<5;++i)
        sum+=p[i];
    cout<<"sum is > "<<sum <<endl;
    }
void mul(){
    int* p=in();
    int mul=1;
    for(int i=0;i<5;++i)
        mul*=p[i];
    cout<<"array multiplyed > "<<mul<<endl;
    }
void avg(){
    int* p=in();
    int sum =0;
    int i=0;
    for( ;i<5;++i){
    sum+=p[i];
    }
    cout<<"average is > "<<sum/i<<endl;
    }
void abs(){
    int* p=in();
    cout<<" # no negativity >\n";
    for( int i=0;i<5;++i){
        int c =(p[i]<0)? - (p[i]) : (p[i]);
    cout<<c<<endl;}
    }
bool choice(){
    char c ;
    cin>>c;
    if (isalpha(c)){
    switch(c){
//        case 'F':
//        case 'f':factorial();
//        break;
        case 'A':
        case 'a':add();
        break;
        case 'V':
        case 'v':avg();
        break;
        case 'M':
        case 'm':mul();
        break;
        case 'B':
        case 'b':abs();
        break;
        case 'Q':
        case 'q':cout<<"exiting \n";
        return false;
        break;
        default: cout<<"not fount\n";
    }
    return true;
    }
    else{
        cout<<"u r not typing correct option to proceed \n"<<"try again or press Q or q to exit program \n";
        return true;
        }
    }  
int numcount(unsigned int n){
    ushort count =0;
    while(n>0){
        count +=1;
        n=n/10;
        }
    return count;
    }

//int dtoB1(){
//    int n=7;
//    long int ans=0;
//    ushort g=0;
//    while(n>0){
//        ans=n%2;
//        ans*=pow(10,g);
//        n=n/2;
//        ++g;
//        }
//    return ans;
//    }

int numcountspec(int n ,int d){
    cout<<static_cast<int>(3.2)/2;
    return 10;
    }

int main()
{   
   while(true){
   bool d =choice();
   if (d != true)
       exit(0);
   }
cout<<numcountspec(101010001,3);
	return 0;
}