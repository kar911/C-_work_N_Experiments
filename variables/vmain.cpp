#include<iostream>
#include<climits>
using std::cout; 
int age {98};
void golbalvar(){
    cout<<age<<"0\n";
    }
void golbalvar1(){
    int age=12;
    cout<<age<<"1\n";
    }
void datatype(){
    int i=1233;
    int16_t  j=356;
    cout<<j<<i;
    }
/*
 * three types of assignment  one is
 *  = 12; simple
 *  {12}; told to be good c++11 se
 *  (12); constructor intialisation
 * 
 * "Initialize as close to the use"
 * */
/*void size(){
    cout<<sizeof(char)<<"\n";
    cout<<sizeof(short)<<"\n";
    cout<<sizeof(int)<<"\n";
    cout<<sizeof(float)<<"\n";
    cout<<sizeof(double)<<"\n";
    cout<<sizeof(long )<<"\n";
    cout<<sizeof(long double)<<"\n";
    }*/
void constant(){
    const int x=12U;
    const int y=13U;
    cout<<x+y<<"\n";
    }
void constanttrial(){
const int tax_rate =6;
const int rate_per_room=30;
int room_count;
std::cin>>room_count;
int cost_rooms=room_count*rate_per_room;
float total_tax=cost_rooms*tax_rate*0.01;
float total1=cost_rooms+total_tax;
cout<<"total cost "<<total1; 
    } 
    
int main(){
   int i {12};
   char j{'d'};
   unsigned int l=12;
   long long s=12102;
   double dar {13132.213};
   cout<<++i<<dar<<std::endl;
   size();
   golbalvar(); 
constanttrial();
   golbalvar1();
   datatype();
    }