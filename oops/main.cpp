#include<iostream>
#include<string>
#include "testhead.h"// as it is included the testhead.h collect the declarration of 
//its prototype from test.cpp and linker give the whole thing to main.cpp
using namespace std;
class Demo{
    public: 
    string name;
    void say_my_name(){
        cout<<name;
        }
    }; 
    
//class Accessmodes{
//    //default is private
//     
//    };
int main()
{
    {//setting scope is  so it destroy object pr
    Acunt pr{9};
//    pr.setx(112);
    cout<<pr.getx();
    }//
   Demo krank;
   krank.name="krank";
   krank.say_my_name();
   cout<<endl;
// with pointer
Demo *lank=new Demo;
lank->name="hello there!";
lank->say_my_name();    
delete lank;
delete krank; //not work cause not pointer 
krank.say_my_name();
cout<<endl;
	return 0;
}
