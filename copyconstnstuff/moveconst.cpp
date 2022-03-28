#include<iostream>
#include<string>
#include<vector>
using namespace std;
//deep copy is expencive  operation
//we can use move constructor that is used to move object rather than copy
// the compiler eleminate unnassery copy const and some time move const
// it use copy illusion (return value optiimization is a method for compiler to use)

 // just for show &&  
void funn(int &&p){ //  when calling it accept no keyword and variable only int or specified in data type rigth value
    p+=1; // be upgraded
    cout<<p<<'\n';
    }

void funn1(int p){ 
    p+=1; // be upgraded
    cout<<p<<'\n';
    }

void funn2(int &p){ // refference dedega
    p+=1; // be upgraded
    cout<<p<<'\n';
    }

void funn3(int *p){ //address ko increment karega
    p+=1; // be upgraded
    cout<<p<<'\n';
    }

int main(){
int &&fun=123; // r value refference making (fun) // this specific is not used but its used as function funn(int &&p)
// this can be used to pass a constant to function
cout<<++fun;
funn(203);//can cause error
funn1(fun);// here 'fun' is variable
funn2(fun);// here "fun" is a pointer it derefffernced in funn2
//funn3(&fun);
// if can't specify in method declaration that it is a r value and give
// it's reff to function
fun =144;// changed r value
    funn(200);
    cout<<fun<<'\n'<<&fun<<'\n';
    cout<<endl;
    return 0;
    }


class Move{
private:
    int *data;
public:
    Move(int d)
    {
        data=new int;
        *data=d;
        cout<<"saved \n";
    }

    Move(const Move &sc):data(sc.data)
    {
        cout<<"copy const "<<*this->data<<endl;
    }
        
    ~Move()
    {
        if(data!=nullptr){
            cout<<"deleting somthing ->"<<*data<<'\n';
            }
        else{
            cout<<"deleting null"<<endl;
            }
        delete data;
        cout<<"removed object"<<endl; 
    }
    
    Move(Move &&sc) noexcept
    : data {sc.data}{
        sc.data=nullptr;
        cout<<"move is just passing the pointer is to pass the address and then deleting it"<<*data<<endl;
    }
    };

int main()
{
   vector <Move> vr;
   vr.push_back(Move{10});
   vr.push_back(Move{20});
   vr.push_back(Move{30});
   cout<<endl;
	return 0;
}
here  the moving is depend on number of items in vector 