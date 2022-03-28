#include <iostream>
using namespace std;
// use virtual function in case we call them form super class pointer or refference
//  that perform dynamic binding of the function to the object 
// if not done it is statically bind and  
//A *b= new B(); 
// b.show //outputs to "show -A"
//and if get the virtual or dynamic bind/ bind to heap which is   it
//it show 
//A *b= new B(); 
// b.show //outputs to "show -B"
class  A{
public:
    A(){
        cout<<"create - A \n";
        }
      virtual  void show(){
            cout<<"show - A \n";
            }
   virtual ~A(){
        cout<<"destroy - A \n";
        }
    };
class  B:public  A{
    public:
    B(){
        cout<<"create - B \n";
        }
       virtual void show(){
            cout<<"show - B \n";
            }
    virtual ~B(){
        cout<<"destroy - B \n";
        }
    };
class  C:public  A{
public:
        C(){
        cout<<"create - C \n";
        }
      virtual  void show(){
            cout<<"show - C \n";
            }
    virtual ~C(){
        cout<<"destroy - C \n";
        }
    };
void call(A &a){
    a.show();
    }

int main()
{
A *a= new A(); //here  a is a pointer of type A and points at object area of A
A *b= new B(); //here  a is a pointer of type A and points at object area of B it is leagle as (B is a A)
A *c= new C(); //here  a is a pointer of type A and points at object area of C it is leagle as (C is a A)
//    a->show();
   b->show();
//    c->show();
//    delete c;
//    delete b;
//    delete a;

//B b;//  NO BIGGIE jus calling through refference the above style
//A &bb=b;
//call(bb);


////A a;
////B b;
////C c;
//// a.show();
//// b.show();
//// c.show();
//// out put for deletes -- 
////it can be any thing as the delete is called  in upper statements
//// as it is deleting from heap style
////not stack (LIFO)
////------------------
////destroy - A 
////destroy - B 
////destroy - A 
////destroy - C 
////destroy - A 
////------------------
   cout<<endl;
	return 0;
}
