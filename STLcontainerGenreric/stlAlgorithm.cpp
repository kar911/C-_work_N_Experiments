#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

struct f{ // functors  = function +operator
    void operator() (int x){// this operator
        cout<<x*x<<" ";
    }
    };

//struct h{ // functors 
//    void operator() (string x,string v){
//        cout<< x<<v<<endl;
//    }
//    };

void sqr(int x){
        cout<<x*x<<" ";
        }
        
void test(){
    vector<int> g{1,2,4,5,3};
    auto loc =find(g.begin(),g.end(),3); //to find three loc is itterator  of vector< int>
    if(loc!=end(g))
        cout<<*loc; // if not found give 0;
    f s;
    vector<int> vec{1,2,3,4};
    cout<<"\nusing functor"<<endl;
    for_each(vec.begin(),vec.end(),s); // using functor 
    //NOTE
//    if we got a user defined data type we must includes
//    custom operators to make it work like
//    int find function it will use == operator so
//    we must override these operator to the class who's object is used
    cout<<"\nusing pointer"<<endl;
    for_each(vec.begin(),vec.end(),sqr); //function as pointer
cout<<"\nusing lambda"<<endl;
    for_each(vec.begin(),vec.end(),
    [] // sign of lambda
    (int x) // parrameter /attribute
    {cout<<x*x<<" ";} // this is lambda fuction body
    );
//    h j;
//    map<string,string> ver{{"dsadasd","dd"},{"1dsadasd","1dd"}};
//    for_each(ver.begin(),ver.end(),j);
    }
int main(){
//    test();
vector<int> h{1,2,4,5,2,3,6,7};
cout<<count(h.begin(),h.end(),2)<<endl; // it count the acurence
cout<<count_if(h.begin(),h.end(),[](int x){return x>4;})<<endl; // it count the acurence
cout<<boolalpha;
cout<<all_of(h.begin(),h.end(),[](int x){return x>4;})<<endl; // i give ture if all satisfy condition
cout<<any_of(h.begin(),h.end(),[](int x){return x>4;})<<endl; //  give ture if any satisfy condition
replace(h.begin(),h.end(),2,200);// it count '2' the acurence and replace them with '200'

   for(int f:h)
       cout<<f;
   cout<<endl;
   return 0;
   }