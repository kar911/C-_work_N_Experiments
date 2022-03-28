#include <iostream>
#include<cctype>
#include<string>
#include<cstring>
//#include<cstdlib> //for conversions of one to other type (c)
using namespace std;
void ctypstr(){
    //null terminated , constant, using assignment after intialization cause problem
    // the size is static
//    char n[8];
//    char g[8];
    //n="frank"; not work
//    use instead
//       cout<<strcpy(n,"frank")<<endl;
        //concat
//        cout<<strcat(n," there")<<endl;
//        cin.getline(g,8,' ');//last argument is  used for c strings
            int i;
//            for hex ,oct ,conversion use 
cout.flags(ios::hex | ios::showbase);
cin>>i;
cout<<i<<endl;
        
    }
void cppsrt(){
   string f="abcdefassadsafaf";
   cout<<f.capacity()<<endl; 
   cout<<f.length()<<endl; 
   cout<<f.back()<<endl; 
//    cout<<f.begin()<<endl; 
   cout<<f.c_str()<<endl; 
   cout<<f.front()<<endl; 
//    cout<<f.get_allocator()<<endl; 
   cout<<f.max_size()<<endl; 
//    cout<<f.pop_back()<<endl; 
   cout<<sizeof(f)<<endl; 
   string g(4,'x');
   string h {f,5};//no reverse
   cout<<boolalpha<<h<<endl;
   for (size_t i{0};i<f.length();++i) //size_t for +ve length good to use
       cout<<f.at(i);
       getline(cin,f,'f');
       cout<<f;  
for (size_t i{0}; i<200;++i)
   cout<<char(i);
string d="dsadd";
  }
void test(){
    string x;
    cout<<"f";
    string alpha="ABCDEF GHIJKLMNOPQRSTUVWXYZ -";
    string keyy="abcdefghijklmnopqrstuvwxyz- ";
//    getline(cin,x);
cin>>x;
int f=x.length();
    for(int i{0};i<f;++i){
//        ushort f =alpha.find(x.at(i));
char j=x.at(i);
char d=keyy.at(int(alpha.find(j)));
x=x.replace(i,1,d,1);
    }
    cout<<x;
    }
int main()
{
   test();
	cout<<endl;
	return 0;
}
