#include <cstdlib>
#include<climits>
#include<iostream>
//#include<ctime>
#include<iostream>
using namespace std;
inline int cal(int a){ // when inline is encounter by compiler it paste the function to place of call
    return 12+a;
    }

// static retain value after the function execution
//void c(){
//    static int d=10;
//    cout<<d<<endl;
//    cout<<ULONG_MAX; //18446744073709551615
//    d+=10;
//    }

int c (int a=2){
 return 123+a;   
}

namespace kar{
    void print(string const s){
     std::cout<<s<<"LLLLLLLLLL";
    }
    }


using namespace std;
void randm();
// return type is not allowed in overloading
void randm(int d){
//    cout<<RAND_MAX<<endl;
//srand(time(nullptr));
    cout<<d;
    }
void randm(float f){
//    cout<<RAND_MAX<<endl;
//srand(time(nullptr));
    cout<<f<<'f';
    }
    
void pt(int n [],ushort l){
    for(size_t i=0;i<l;++i)
        cout<<n[i];
    cout<<endl;
//    n[0]=21; //only for read thats why not mutable due to constant
    for(size_t i=0;i<l;++i)
        cout<<n[i];
//    cout<<sizeof(l)<<USHRT_MAX;
    }
using namespace kar;
int main()
{
   randm();
//randm(1);
//int d[]{1,2,3,4,5};
//pt( d,sizeof(d)/sizeof(d[0]));
//randm(2.2f);
//cout<<
//c();
//c();
//cout<<c(212)<<'\n'<<cal(12)<<"d";
//cout<<endl;
print("kmsakmdmas");
	return 0;
}
void randm(){
//    cout<<RAND_MAX<<endl;
srand(time(nullptr));
    cout<<rand()%7;
    }