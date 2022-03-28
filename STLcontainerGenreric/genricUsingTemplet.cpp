#include<iostream>
using namespace std;
template <typename g,typename h>
class asd{
    g anyvalue;
    h anothervalue;
public:
    asd(g anyvalue,h anothervalue):anyvalue{anyvalue},anothervalue{anothervalue}{
        }
    void get(){
    cout<<anyvalue<<endl;
    cout<<anothervalue<<endl;
        }
    
};

template <typename k>
k gonext(k l){
    return ++l;
    } 
int main(){
   // template is not generated their typed version is generated in 
   cout<<gonext(12)<<endl;
   cout<<gonext(12.2)<<endl;
   cout<<gonext('1')<<endl;
   cout<<endl;
   asd<int,float> l{12,33.4};
   asd<string,float> l1{"kart",33.31313};
   l.get();
   l1.get();
   
   return 0;
   } 