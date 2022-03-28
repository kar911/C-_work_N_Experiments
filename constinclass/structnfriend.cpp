#include<iostream>
using namespace std;
// 
// struct is same as class but in class the its member are private
// and in struct its member s are public
// struct are used to store data when its passive 
// and do not declare method in them not useful
// for active we use class

struct per{
    int x=12;
    };
    
    class ot;
    
class perr{
//    int x=13; // this give error as private is not accessed from out the class
    friend void displ(perr &p); // friend function
//    friend class ot;
//     friend void oto::disot(perr &p);
public:
int x=13;
//friend void displ(perr &p); //this can also work but what is use freinds use then
    void dis(){
        cout<<"dis"<<x<<endl;
        }
    };
    
class oto{
        int otx=69;
        public:
        void disot(perr &p){
            cout<<otx<<endl;
            cout<<p.x<<endl;
            }
        };
    
    
    void displ(perr &p){
        p.x+=1; // now as perr declared displ as friend it can change x
     cout<<"displ"<<p.x<<endl;   //display x  but dis has to be public to do this
    }
int main(){
    per  d;
    perr f;
    oto l;
    cout<<d.x<<endl;
//    cout<<f.x;
f.dis();
l.disot(f);
    displ(f);
    cout<<endl;
    return 0;
    }