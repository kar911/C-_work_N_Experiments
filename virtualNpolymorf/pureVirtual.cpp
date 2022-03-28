#include<iostream>
using namespace std;
//virtual function can be used when you want overriding and dynamic allocation of 
//like => A &c=new G();
//pure virtual fucntion are for making abstract class that are not to have a object
// while in a class if all fucntion are pure virtual then it is a interface 
// where as in abstract class it is just one or more not all pure virtual function is required
// to make a concreet class the derived must have all function overriden and with some declareartion in it
// if even a single function is not  declared then that derived class is also a abstract class
// 
// and jab parameter perntasis close hoti hai uske baad wale sare as a flag kam kertee hai
// like const and override they are to say function is bound to obey const and override rules
// virtual void a1() const override {} 
//
//
// and -> operator is alway used by pointer only // as it gave error


class I_interface{ // due to naming conventions we use I_"then class name" as interface name
    // interfaces are those classes that have all  pure 
// virtual functions  and have a destructor
friend ostream &operator<<(ostream &os,const I_interface &rhs);
public:
    virtual void print(ostream &os) const=0;
    virtual void a1()=0; // pure virtual function
    virtual void a2()=0;
    virtual void a3()=0;
    virtual ~I_interface(){
        cout<<"interface destroyed\n";
        }
//        virtual ~I_interface()= default;  //it will perform the default distructor
    };
    
    ostream &operator<<(ostream &os,const I_interface &rhs){
        rhs.print(os);
        return os;
        }


class A: public I_interface{// also a interface as all are pure virtual 
    public: 
    virtual void a1()=0; // pure virtual function
    virtual void a2()=0;
    virtual void a3()=0;
    virtual ~A(){
        cout<<"destroyed A \n";
        };
    virtual void print(ostream &os)const override{
         os<<"class A calling \n";   
            }
    };
class B:public A{// abstract class  B class derived form A but not all A's pure virtual function 
        // are overrideed by B  as we can see down we have TWO funtions a1,a2
        // so B is a abstract class not concret class as C
    public:
    virtual void a1() override{
        cout<<"B -a1 overriden \n";
        }
    virtual void a2() override{
        cout<<"B -a2 overriden \n";
        }
    virtual ~B(){
        cout<<"destroyed B \n";
        };
    };
class C:public A{
    public:
        virtual void a1() override{
        cout<<"C -a1 overriden \n";
        }
        virtual void a2() override{
        cout<<"C -a2 overriden \n";
        }
        virtual void a3() override{
        cout<<"C -a3 overriden \n";
        }
        virtual ~C(){
        cout<<"destroyed C \n";
        }
        virtual void print(ostream &os)const override{
         os<<"class C calling \n";   
            }
    };
//class C:public A{
//    public:
//        virtual void a1() {
//        cout<<"C -a1 overriden \n";
//        }
//        virtual void a2() {
//        cout<<"C -a2 overriden \n";
//        }
//        virtual void a3() {
//        cout<<"C -a3 overriden \n";
//        }
//        virtual ~C(){
//        cout<<"destroyed C \n";
//        }
//        virtual void print(ostream &os)const {
//         os<<"class C calling \n";   
//            }
//    };
    int main(){
       B b; // it gives the error as the B class derived form A but not all 
         //so B is not a abstract class
       C c;// static it is that's why error it gives
       I_interface *c= new C();
       c.a1();
       c->a1();
//here
//these are same but one is pointer used and other is refference
//_________________________________
           C c;
           A &x=c;
           x.a1();
//// _________________________________         
         A *b=new C(); // it not work  because there only one concreet class C and B is a abstract class
        b->a1();
        delete b;
        cout<<endl;
        return 0;
        }