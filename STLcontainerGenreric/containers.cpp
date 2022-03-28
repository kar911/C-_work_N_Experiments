#include<iostream>
#include<array>
#include<algorithm>
#include<vector>
#include<deque>
#include<numeric>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<list>
#include<forward_list>
#include<execution>
using namespace std;


void STLarray(){ 
    
    //==========================================
    
    //fixed size 
    // can't decay to a pointer as in case of raw array 
    // vector only no multi demension
    array<int,5> arr{1,4,2,5,3};
    array <int,5> a1;
    cout<<arr.size()<<'\n'; // size of array
    cout<<arr.at(1);// give elemnt at index
    cout<<arr.back();// give element at arr.end() -1 //last element 
    cout<<arr.front();// give element at arr.begin() //first
    a1.fill(1); // fill the  arra with the given agument
    cout<<a1.at(1);
    a1.swap(arr); // exchange with arguments and array
    cout<<a1.back();
    cout<<a1.front();
    cout<<"\n arr after swap \n";
    for(int a:arr)
        cout<<a<<' ';
    cout<<"\n a1 after swap \n";
    for(int a:a1)
        cout<<a<<' ';
    
    // algorithm compatible
   auto aof1 =all_of(a1.begin(),a1.end(),[](int x){return x<3;}); // all are not
   auto aof =all_of(arr.begin(),arr.end(),[](int x){return x<3;});
   auto anof1 = any_of(a1.begin(),a1.end(),[](int x){return x<3;});
    auto nof1 = none_of(a1.begin(),a1.end(),[](int x){return x<3;});
    cout<<'\n'<<aof<<' '<<aof1<<' '<<anof1<<' '<<nof1;
    
    for_each(a1.begin(),a1.end(),[](int &x){++x; }); // map function to all elements
    cout<<'\n';
    for(int a:a1)
        cout<<a;
    // for c++20
     // map function to all elements
    //for_each_n(a1.begin(),2,[](int &x){++x; });
    cout<<'\n'<<count(a1.begin(),a1.end(),4); // count the occurence of 4 in a1
    cout<<'\n'<<count_if(a1.begin(),a1.end(),[](int x){ return x>2; }); // changed  a1  [25364] so 4
    cout<<'\n';
    for(int a:a1)
        cout<<a;
    cout<<accumulate(a1.begin(),a1.end(),0); // works with <numeric>
    
//    cout<<reduce(a1.begin(),a1.end(),0
    cout<<"\n min \n"<<"d";

    //==========================================
    }


    void STLvectors(){
        //==========================================
        vector<int> vec (10,13);// this gives the a vector of 10 13teens
        for(int a:vec)
            std::cout<<a<<'\n';
        cout<<"-------------------";
        vector<int> vec1{1,9,2,3,8,7,6,5};
//        cout<<vec1.size()<<'\n';
//        cout<<"-------------------";
//        cout<<vec1.capacity()<<'\n';
//        cout<<"-------------------";
//        cout<<vec1.max_size()<<'\n'; // max size of vector in this sys can be possible
//        cout<<vec1.at(1)<<'\n'; // do bound checking
//        cout<<"-------------------";
//        cout<<vec1.back()<<'\n';
//        cout<<"-------------------";
//        cout<<vec1.front()<<'\n';
//        cout<<"-------------------";
    vec1.push_back(13);
//    vec1.emplace_back("LARY",19); // this will call the constructor of custome 
// class an place its instance variable to name="LARY",age=19 
// rather then using 
//vec1.emplace_back(preson{"LARY",19});
   // work for simple int floats also
    for(int a:vec1)
            cout<<a<<'\n';
    cout<<"-------------------21212";
    vec1.insert(vec1.begin()+3,1000); // inset 1000 at 4th
    for(int a:vec1)
            cout<<a<<'\n';
    cout<<"-------------------1233";
    vec.at(3)=15;
    cout<<"-------------------inserting";
    // getting index of 1000 in vec1 to start insert form previous index of 1000
    auto it=find(vec1.begin(),vec1.end(),1000);
//  for insert all of vec to vec1 before 1000  
    vec1.insert(it,vec.begin(),vec.end()); 
    for(int a:vec1)
            cout<<a<<'\n';
    cout<<"-------------------";
    cout<<vec1.empty(); // chech if empty 
    cout<<"-------------------for each";
    for_each(vec1.begin(),vec1.end(),[](int x){cout<<x<<'\n';});
    cout<<"------------------- eraze";
    // eraze from 3index to last excluding last three
//    vec1.erase(vec1.begin()+4,vec1.end()-3);
//    for(int a:vec1)
//            cout<<a<<'\n';
   cout<<"-------------------puting all of vec1 at the back of vec";
// puting all of vec1 at the back of vec
//copy(vec1.begin(),vec1.end(),back_inserter(vec));
//    for(int a:vec)
//            cout<<a<<'\n';
   cout<<"-------------------puting all from vec1+2 to end at the back of vec if even";
copy_if(vec1.begin()+3,vec1.end(),back_inserter(vec),[](int x){return x%2==0;});
   for(int a:vec)
            cout<<a<<'\n'; 
    cout<<"------------------- transforming";
// calculate index wise multipy and put that to v3
vector<int> v21{1,2,3,4,5};
vector<int> v2{10,20,30,40,50};
vector<int> v3;
transform(v21.begin(),v21.end(),v2.begin(),back_inserter(v3),[](int x,int y){return x*y;});
   for(int a:v3)
            cout<<a<<'\n'; 
    // it reserve the number of location before expanding
    cout<<"------------------- reserve some capacity\n";
    cout<<v2.capacity()<<'\n';
    v2.reserve(10);
    cout<<v2.capacity()<<'\n';
    //  it give the unused memory
    cout<<"------------------- shrink release the unused memory\n";
    cout<<v2.capacity()<<'\n';
    v2.shrink_to_fit();
    cout<<v2.capacity()<<'\n';
    //==========================================
   }


   void STLdeque(){
       //==========================================
//       double ended queue
//dynamic handled
//can expand and contract as needed
// no contiguous memory alotment
//like linked list of vector
       deque<int> deq;
       deq.push_back(12);
       deq.push_back(13);
       deq.push_back(14);
       deq.push_front(43);
       deq.push_front(53);
       deq.push_front(21);
//       deq.emplace_back();
//       deq.emplace_front();
       cout<<"-----------------"<<'\n';
       for(int f:deq)
           cout<<f<<'\n';
        cout<<"-----------------"<<'\n';
       cout<<deq.size()<<'\n';
       cout<<deq.max_size()<<'\n';
       cout<<deq.at(4)<<'\n';
       cout<<deq.back()<<'\n';
       cout<<deq.front()<<'\n';
       // clear the unused storage
       deq.shrink_to_fit();
       //
       deq.pop_back();
       deq.pop_front();
       cout<<"-----------------"<<'\n';
       for(int f:deq)
           cout<<f<<'\n';
        cout<<"-----------------"<<'\n';
        cout<<accumulate(deq.begin(),deq.end(),0)<<'\n';
       deque<int> dq;
       copy(deq.begin()+1,deq.end(),front_inserter(dq));
       cout<<"-----------------"<<'\n';
       for(int f:dq)
           cout<<f<<'\n';
        cout<<"-----------------"<<'\n';
        dq.clear();
        cout<<boolalpha<<dq.empty()<<'\n';
        copy(deq.begin()+1,deq.end(),back_inserter(dq));
       cout<<"-----------------"<<'\n';
       for(int f:dq)
           cout<<f<<'\n';
        cout<<"-----------------"<<'\n';
        //==========================================
       }

void STLlist(){
    //==========================================
    //sequence containor
    //non contiguous in memory
    //no direct access to element
    //dynamic size
    // doubley linked list 
    // AKA as dequeue but single element not vector
    // AND NO direct access to element (no .at() ,no list[1]=something)
    list<int> j;
    j.push_back(1);
    j.push_back(2);
    j.push_back(3);
    j.push_back(4);
    j.push_front(9);
    j.push_front(8);
    j.push_front(7);
    cout<<"-----------------"<<'\n';
    for (int i:j)
        cout<<i<<'\n';
    cout<<"-----------------"<<'\n';
    cout<<j.size()<<'\n';
    cout<<j.max_size()<<'\n';
    cout<<j.front()<<'\n';
    cout<<j.back()<<'\n';
//    j.erase(j.begin());//used for deleting specific position
//    j.clear(); // clean all data
    cout<<"-----------------"<<'\n';
    for (int i:j)
        cout<<i<<'\n';
    cout<<"-----------------"<<'\n';
    j.resize(5);// delete all the element at greater than 5 
    // only contain 5 element
    cout<<"-----------------"<<'\n';
    for (int i:j)
        cout<<i<<'\n';
    cout<<"-----------------"<<'\n';
    list<int>::iterator x=find(j.begin(),j.end(),1); 
    j.insert(x,100); //default before insertor
    cout<<"-----------------"<<'\n';
    for (int i:j)
        cout<<i<<'\n';
    cout<<"-----------------"<<'\n';
    
    
    
    // // j.insert_after(v,13); // not present
    cout<<"-----------------"<<'\n';
    for (int i:j)
        cout<<i<<'\n';
    cout<<"-----------------"<<'\n';
    //==============================
    }

void STLforward_list(){
    
    //==============================
//    one directional list
//    less over head 
//    no direct element access
//    no BACK_pop and similar back operations
//    only front operator

forward_list<int> l;
l.push_front(12);
l.push_front(1);
l.push_front(2);
l.push_front(132);
l.push_front(142);
//l.pop_front();
auto i=++l.begin();
l.emplace_after(i,100);
//l.emplace_after(i,110);
cout<<"-----------------"<<'\n';
    for (int i:l)
        cout<<i<<'\n';
    cout<<"-----------------"<<'\n';


//==============================
    }
void display(const set<int> &l){
    cout<<'[';
    for(const auto &elem: l){
        cout<< elem<<' ';
        }
        cout<<']'<<'\n';
    }
void display(const multiset<int> &l){
    cout<<'[';
    for(const auto &elem: l){
        cout<< elem<<' ';
        }
        cout<<']'<<'\n';
    }
    void display(const unordered_set<int> &l){
    cout<<'[';
    for(const auto &elem: l){
        cout<< elem<<' ';
        }
        cout<<']'<<'\n';
    }
    void display(const unordered_multiset<int> &l){
    cout<<'[';
    for(const auto &elem: l){
        cout<< elem<<' ';
        }
        cout<<']'<<'\n';
    }
//===========Associative Container===================    
// these requires key to retrive
// usually implemented ass a balanced binary tree or hashsets
// faster ops to do
void STLset(){
         //  it is Associative  container
         //  no .at()   []operator  is not allowed
         // dont have front and back so no pop,push 
         // no duplicacy only one element  only
         //  gives 
  //==============================
         std::set<int> d1 ={1,2,3,4,55,55,4,6}; // fifo
         cout<<d1.size()<<'\n';
         cout<<d1.max_size()<<'\n';
        display(d1);
        d1.insert(12);
        display(d1);
  //==============================
//  sorted by key
//  allow duplicate
//  all iterator are available
         std:: multiset<int> d ={1,2,3,4,55,55,4,6}; // fifo
         cout<<d.size()<<'\n';
         cout<<d.max_size()<<'\n';
         display(d);
          d.insert(12);
          display(d);
//==============================
//no duplicate
//element can't be modified ( first erase and add new)
//no reverse itterattor allowed
         unordered_set<int> d2 ={1,2,4,55,55,4,6,3};// lifo
         cout<<d2.size()<<'\n';
         cout<<d2.max_size()<<'\n';
            display(d2);
            d2.insert(15);
            display(d2);
            cout<<"inserting 2"<<'\n';
            auto i =d2.insert(2);
            cout<<*(i.first)<<'\n'; // the i gives a pair object like map and 
            cout<<i.second<<'\n'; 
            cout<<"inserting new 13"<<'\n';
            auto i1 =d2.insert(13);
            cout<<*(i1.first)<<'\n';
            cout<<i1.second<<'\n';
//==============================
//allow duplicacy
//no reverse itterator allowed
         unordered_multiset<int> d3 ={1,2,4,55,55,4,6,3};//lifo
         cout<<d3.size()<<'\n';
         cout<<d3.max_size()<<'\n';
          display(d3);
          d3.insert(15);
          display(d3);
          auto f=d3.find(0); //gives the itterator to element if found if not return end() position
          if(f!=d3.end())
              cout<<*f<<'\n';
          else
              cout<<"not found"<<'\n';
            cout<<"inserting 2"<<'\n';
            auto i2 =d3.insert(2);
            cout<<*(i2)<<'\n'; // the ittreator to 2
            cout<<"inserting new 13"<<'\n';
            auto i3 =d3.insert(13);
            cout<<*(i3)<<'\n';// the ittreator to 13
            display(d3);
            d3.erase(i3);
            display(d3);
            int j=d3.count(55); // 2
            cout<<j<<'\n';
            int h=d3.count(14);// 0 as not found
            cout<<h<<'\n';
            cout<<boolalpha<<d3.empty()<<'\n';
            d3.clear();
            cout<<d3.empty();
//==============================
        }
        void STLmap(){
            // have key value pairs
            // collections of stored object that allow fast retrieval using key
            // implement ed using balanced brinary tree or hashsets
            // most ops are effecient very  much
            //similar to dictionary
            // element are stroed as key value pairs(std::pair)
            //==============================
            // map
            // ordered by key
            //no duplicate element
            // direct access to element
            // all  iterator available And invalidate -
            // when corresponding element is deleted
//            map<string,int> g {{"sd",1},
//            {"fd",3}} ;
//            for( const auto b:g ){
//                cout<<"key ="<<b.first<<"\nvalue ="<<b.second<<'\n';
//                }
//            cout<<g.size()<<'\n';
//            cout<<g.max_size()<<'\n'; // nomber a element can contain
//            pair<string,int> p1{"lk",13};
//            g.insert(p1);
//            cout<<g.insert(make_pair("sp",14)).second<<'\n'; // add and know if its inscerted or not
//            for( const auto b:g ){
//                cout<<"key ="<<b.first<<"\nvalue ="<<b.second<<'\n';
//                }
//            cout<<g.at("sp")<<'\n';
//            cout<<g["lk"]<<'\n';
//            // updating value
//            g.at("sp")=33;
//            for( const auto b:g ){
//                cout<<"key ="<<b.first<<"\nvalue ="<<b.second<<'\n';
//                }
//            auto pp=g.find("sp"); // find with key
//            if (pp!=g.end())
//                cout<<(*pp).second<<'\n'; // first get to the object " (*pp)" then access its variables ".second"
//            g.erase("lk"); // delete "lk"
//            cout<<"------------------------------\n";
//            g.erase("sp"); // delete "sp"
//            for( const auto b:g ){
//                cout<<"key ="<<b.first<<"\nvalue ="<<b.second<<'\n';
//                }
//            cout<<"------------------------------\n";
//            g.clear(); // erase all element 
//            for( const auto b:g ){
//                cout<<"key ="<<b.first<<"\nvalue ="<<b.second<<'\n';
//                }
//            cout<<g.empty()<<"\n"; // yes its empty
            //==============================
            // multimap
            multimap<string,int> mm{{"st",1},{"st",2}};
            for( const auto b: mm){
                cout<<"key ="<<b.first<<"\nvalue ="<<b.second<<'\n';
                }
            //==============================
            //unordered_map
            unordered_map<int ,int> p{{1,2},{3,4},{5,3}};
            for( const auto b: p){
                cout<<"key ="<<b.first<<"\nvalue ="<<b.second<<'\n';
                }
            //==============================
            //unordered_multimap
            unordered_multimap<int ,int> p1{{1,2},{3,4},{1,2}};
            for( const auto b: p1){
                cout<<"key ="<<b.first<<"\nvalue ="<<b.second<<'\n';
                }
            //==============================
            }
int main(){
    STLarray();
STLvectors();
STLdeque();
STLlist();
STLforward_list();
STLset();  
STLmap();
//cout<<endl;
    return 0;
    }