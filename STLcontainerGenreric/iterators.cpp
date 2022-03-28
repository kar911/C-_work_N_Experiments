#include<iostream>
#include<vector>
using namespace std;
void whileiter(){
    vector<int> g{1,2,3,4,5};
    vector<int>::iterator i=g.begin(); // itterator works as a pointer sort like *(g+i)  like in main
    while(i!=g.end()){ // and g.end() as (g size + g) calculated = to i the it can be dereferenced *i
     cout<<*i<<' '; // pointer type addition   /|\       //           
     i++;   
    }
    }
void whileiterfromEnd(){ //reverse
    vector<int> g{1,2,3,4,5};
    auto i=g.rbegin();
    while(i!=g.rend()){
    cout<<*i<<' ';
    i++;   
    }
    }   
void foriter(){
    vector<int> g{1,2,3,4,5};
    for(auto i=g.begin();i!=g.end();++i)
         cout<<*i<<' ';
    cout<<endl;
    } 
void foriterfromEnd(){
    vector<int> g{1,2,3,4,5};
    for(auto i=g.rbegin();i!=g.rend();++i){
//    *i=12; //  with out const it can change the element if use cr this will give error
        cout<<*i<<' ';
    }
    }
void foriterConstant(){ //constant not allow to change the data 
    vector<int> g{1,2,3,4,5};
    for(auto i=g.cbegin();i!=g.cend();++i) //  cbegin stands for constant itterator
         cout<<*i<<' ';
    cout<<endl;
    } 
void foriterfromConstantEnd(){
    vector<int> g{1,2,3,4,5};
    for(auto i=g.crbegin();i!=g.crend();++i) // crbegin stands for constant reverse
        cout<<*i<<' ';
    }
void foriterConstantnoauto(){ //constant not allow to change the data 
    vector<int> g{1,2,3,4,5};
    vector<int>::const_iterator i=g.cbegin(); // with out auto
    for( ;i!=g.cend();++i)
         cout<<*i<<' ';
//    *i=12; // this will show read only
    cout<<endl;
    } 
void foriterfromConstantEndnoauto(){
    vector<int> g{1,2,3,4,5};
    vector<int>::const_reverse_iterator i=g.rbegin(); // 'r' is a must you can miss 'c' but not 'r'
    for( ;i!=g.rend();++i)
        cout<<*i<<' ';

    }
int main(){
//    whileiter();
//    whileiterfromEnd();
//    foriter();
//    foriterfromEnd();
//    foriterConstantnoauto();
//    foriterfromConstantEndnoauto();

//    int d[]{1,2,3,4,5,6};
//    for(int f:d)
//        cout<<f<<endl;
//    for(size_t i =0;i<6;++i){
//    cout<<*(d+i);
//    }
   cout<<endl;
   return 0;
   }