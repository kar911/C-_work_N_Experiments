#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;
void state(){
//    if (5>10)
//        cout<<'g';
//    else
//        cout<<'n';
int g=0;
cin>>g;
switch(g){
    case  10: cout<<"good";
//    if(g<10){
//        break;  // can use if in switch
//        }
    case  11: cout<<"good11";
    break;
    default :cout<<"good1";
    }
    }
void conditionop();
void in(){
         cout<<"enter the array \n";
//         int c[3]{0};
////         int j=sizeof(c)/sizeof(c[0];
//        for(int & f:c){
//            cin>>f;
//            }
//        cout<<sizeof(c)/sizeof(c[0]);
//        for(int f:c)
//            cout<<f;
            
            int c1[2][3] {{1,2,3},{3,2,1}} ;
         int j=sizeof(c1)/sizeof(c1[0]);
//        for(int & f: []){
//            for( int g: c1[] )
//                cin>>*g;
//            }
            
            int16_t v=0;
        cout<<sizeof(c1)/sizeof(c1[0][0])<<endl;
        for(const int *f : c1) {
     for(int x: {0,1,2})
        {   
            cin>>c1[v][x];
        }
        v+=1;
        cout<<"\n->"<<v;
        cout<<"\n<----\n";
    }
            
            
         int v1=0;
        cout<<sizeof(c1)/sizeof(c1[0][0])<<endl;
        for(const int *f : c1) {
     for(int x: c1[v1])
        {   
            cout<<x<<'\n';
        }
        v1+=1;
        cout<<"\n->"<<v1;
        cout<<"\n<----\n";
    }
        
        }
    
//void  test(){
// do {            
//            
////        if (ch == "q" || ch== "Q")
////            break;
//        switch(ch){
//            case "P":
//            case "p": in();
//            p();
//            
//            break;
//            case "A":
//            case "a":
//            break;
//            case "M":
//            case "m":
//            break;
//            case "S":
//            case "s":
//            break;
//            case "L":
//            case "l":
//            break;
//            default: cout<<" not here";
//            }
//        }while(ch != "q" || ch!= "Q");
//    }
int main(){
//state();
//conditionop();     
//test();
in();
cout<< endl;
    return 0;
    }

void conditionop(){
//     int res=(2>3)?5:4 ; 
//cout<<res; 
//for(int i{0},j{2},k{4},c{3}; i<5 ; ++i ,j=i+j ,k+=2,c++ )// isse jyada jarurat nahi padgi
//    cout<<i<<' '<<j<<"ffg"<<k<<' '<<c<<endl;
        float d []{213.9444,3,4,1,14};
        for(int s:d){
//        for (auto s:d ) //auto used for auto detect type of itterator element
            cout<<fixed<<setprecision(2);
        cout<<s<<endl;
        }
    }
