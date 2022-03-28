#include <iostream>
#include <memory>
#include<vector>
using namespace std;
class B; // forward declretion
class A{
    shared_ptr<B> bptr;
public:
void set(shared_ptr<B> &b){
bptr=b;
    }
    A(){
        cout<<"create A \n";
        }
        ~A(){
        cout<<"destroy A \n";
        }
    };
class B{
    weak_ptr<A> aptr; // this will work as weak pointer is possibly a sub class of shared
public:
void set(shared_ptr<A> &a){
aptr=a;
    }
    B(){
        cout<<"create B \n";
        }
        ~B(){
//            cout<<aptr.use_count();
        cout<<"destroy B \n";
        }
    };
void weakpointer(){// used in situation to make doublly linked list and returning things
shared_ptr<A> a=make_shared<A>();
shared_ptr<B> b=make_shared<B>();    
a->set(b);// cyclic refference that will cause memory leak
b->set(a);
    }
void shared_pointer(){
    // its the pointer we use in the python interpreter that work onrefference count
    // and shared refferenc work on the refference count it is that how many pointer are pointing
    // to the same address and all the pointer have the count equal to other
    //if pointing the same area and decriment if a pointer changes its pointings
    // or point to null
    
    std::shared_ptr<int> p1 =make_shared<int>(100); // prefferd to make smart pointerDONOT use 'new' 
 //  as we can see p1 is object of pointer type
    std::shared_ptr<int> p3=p1;
    auto m=p3;
    std::shared_ptr<int> p2=p1;
    vector <std::shared_ptr<int>> acount;
    cout<<'\n'<<p1.use_count();//4
    cout<<'\n'<<p2.use_count();//4
    cout<<'\n'<<p3.use_count();//4
    cout<<'\n'<<m.use_count();//4
    acount.push_back(p1); // this not allowed with unique as it is not allowed to be copied
    cout<<'\n'<<p1.use_count();// it shows 5 because the reference is now to vector coied and stored on vector
    acount.push_back(p2);
    cout<<'\n'<<p2.use_count();//6
    acount.push_back(m);
    cout<<'\n'<<m.use_count();//7
    acount.push_back(p3);
    cout<<'\n'<<p3.use_count();//8
     for(const auto aa: acount) // here we dont have to worj=k with refference as it allows copy
         cout<<'\n'<<*aa<<endl;
    p1.reset();
    cout<<'\n'<<p1.use_count();// 0
    cout<<'\n'<<p2.use_count();//7
    cout<<'\n'<<p3.use_count();//7
    cout<<'\n'<<m.use_count();//7
    }
void uniquepointer(){
//     in this we got the destructor and other stuff every thing handled by compiler and <memory>
//     unique pointer can be moved but not copied
//    std::unique_ptr<int> p1 {new  int {100}};   //  as we can see p1 is object of pointer type
    std::unique_ptr<int> p1= make_unique<int>(10);
     auto m=make_unique<int>(10);
     std::unique_ptr<int> p2=make_unique<int>(12);
     vector <std::unique_ptr<int>> acount;
//     acount.push_back(p1); // this not allowed with unique as it is not allowed to be copied
//     acount.push_back(p2);// as pushing require copy
//     acount.push_back(m);
     acount.push_back(make_unique<int>(100));
     acount.push_back(make_unique<int>(12));
     acount.push_back(make_unique<int>(10));
     for(const auto &aa: acount)
         cout<<*aa<<endl;
    cout<<"hello\n";
    cout<<p1.get()<<endl;
    *p1=14;
    cout<<p1.get();     
    cout<<'\n'<<*p1<<" "<<*p2<<" "<<*m;
    p1.reset();
    }

int main()
{
//    uniquepointer();
//    shared_pointer();    
    weakpointer();
    cout<<endl;
	return 0;
}
