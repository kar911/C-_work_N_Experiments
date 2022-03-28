#include <iostream>
using namespace std;
//override key word is to specify that this function must be overriden 
// and must have the same exect defination of types ,const etc.
// if not give error as you are redifining not deriving(overriding)
class A{
public :
    virtual void s() const {
        cout<<"A s";
        }
    virtual ~A(){
        cout<<"destroy - A \n";
        }
    };
class B :public A{
//    class B final :public A{
public:
//    virtual void s() const override final{
        virtual void s() const override{
        cout<<"B s";
        }
    virtual ~B(){
        cout<<"destroy - B \n";
        }
    };
class C:public B{// here you can see the error
// final keyword is used when we don't want another class
// to get inheritor of that class
    virtual void s() const override{
    // here you are not allowed to override 
    // the function from B as final on B.s()
        cout<<"B s";
        }
    };

int main(){
   A *a=new A();
   A *b=new B();
   a->s();
   b->s();
cout<<endl;
return 0;    
}