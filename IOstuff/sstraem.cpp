#include<iostream>
#include<sstream>
#include<limits>
using namespace std; 
// template <typename T,typename g> // dynamic type naming sort of
// // T and g are data types
// // template is used for creating on call data type 
// void f(T c,g h){
//     cout<<c<<h<<endl;
//     }
//void ins(){ //O.G
//    int d{};
//    float g{};
//    std::istringstream iss{"212 32123.3 kartik"};
//    iss>> d>>g;
//    cout<<d <<endl<<g;
//    }
void ins(){
//    int d{};
//    float g{};
string g;
    std::istringstream iss{""};
    for(size_t i=0;i<3;++i){
        cin>>g;
        iss>>g;
        }
    cout<<g;
    }
void ots(){
//    int d{};
//    float g{};
//    string f{};
    string ss;
    std::istringstream iss{""};
    for(size_t i=0;i<3;++i){
        cin>>ss;
        iss>>ss;
        }
//    iss>> d>>g>>f;// iss giving  >> to d>>g
//    ostringstream oss{};
//    oss<<ss<<"-----"<<f<<"-----"<<g<<endl; // d and g giving  to oss<<d<<g
//    cout<<oss.str()<<endl;
    }
    void other(){
        int d{};
        cin>>d;
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); // it describe that the numeric is accepted after than that no characte is accepted
        cout<<d;
        }
int main(){
   ots();
   cout<<endl;
   return 0;
   }