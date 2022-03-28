#include<iostream>
using namespace std;
void boolen(){
    bool a {}; //empty booen is false
    cout<<boolalpha<<a<<endl; //boolalpha is use to show bool 
    // as  T/F format
    // otherwise  as 0 ,1 ect 
    // and cout<<noboolalpha<<a<<endl;
    // for alter boolalpha to noboolalpha
    cout<<(10 == 9.9999999999999999); // 16 decimal presison make it true
                                                                            // if  15 it can give correct answer 
    
    }
void operrators(){
    if (5>10)
        cout<<'g';
    else
        cout<<'n';
    }
void logical(){
    //  || ---------- && ----------------------- !
    cout<<boolalpha<< ((4<3 & 2<3)); //sign '|' or '&' not support bool
    cout<<boolalpha<< !(2<3);
    cout<<boolalpha<< (4<3 || 2<3);
    }
void type_conversion(){
    int s{},d{},a{};
    cin>>s>>d>>a; 
    double avg {0.0};
    cout<<avg<<endl;
avg=static_cast<double>(a+s+d)/3; //explicite conversion
//    avg=(a+s+d)/3.0; //implicite type conversion
//    static_cast<double>
    cout<<avg ;
    }
int main(){
//    int a=4;
//    int s=7;
//type_conversion();
boolen();
//logical();
//operrators();
   cout<< endl;
   return 0;
   }