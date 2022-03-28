#include <iostream>
#include<cmath>
using namespace std;
int convert_to_Binary_recurcive(unsigned int n)
{
   static uint c=0;
   static ushort i=0;
   if(n%2==1)
       c+=pow(10,i);
   if (n / 2 != 0) {
       ++i;
       return convert_to_Binary_recurcive(n / 2);
   }
   return c;
   }
int convert_to_Binary(unsigned int n)
{
    uint c=0;
    ushort i=0;
    while(n>0){
    if(n%2==1)
        c+=pow(10,i);    
    if(n/2!=0){
        ++i;
        n=n/2;
        }
    else
        break;
        
        }
    return c;
    } 
ushort number_of_digit_in_number(int n){
    ushort c=0;
    while(n>0){
        c+=1;
        n=n/10;
        }
    return c;
    }
int reverse_the_number(int n){ // reverse the number given for upto 9 digits formore change data
//type of n,nl
    int nl=n;
    ushort c=0;
    while (nl>0){
        c+=1;
        nl=nl/10;
        }
    int s=0;
    if (n%10==0){
    n=n*10+1;
    }
    while(n>0){
        s=s+((n%10)*pow(10,c-1));
        n=n/10;
        c=c-1;
        }
    return s;
    }
ushort* find_final_last_count_digit(int n){
    ushort f,l,c;
    c=0;
    while(n>0){
        c+=1;
        if(n<10){
            f=n%10;
        break;
        }
        if(c==1){
        l=n%10;
        }
        n=n/10;
    }        
    static ushort p []{f,l,c};//is the 
    return p;
    }
int convert_to_hexadecimal(unsigned int n)
{
   uint c=0;
   ushort i=0;
   while(n>0){
   int8_t f=n%16;
   switch(f){
       case 15:c+=hex()
       }    
   if(n/16!=0){
       ++i;
       n=n/16;
       }
   else
       break;
       
       }
   return c;
   }
ushort *streakends(int n,int8_t d){
    ushort c=0,i=0,e=0,mm=0;
    ushort m [3][2]{{0},{0}};
    while(n>0){
        if (n%10==d){
            c=c+1;
            mm=m[0][0] > m[1][0] ? m[0][0] : m[1][0]; 
            if(mm<count){
                if sizeof m/sizeof m[0][0] !=1{
                    m[0][0]=0;
                    m[0][1]=0;
                    m[1][0]=0;
                    m[1][1]=0;
                    }
                    e=i;
                    
                }
            }
            else{
                c=0;
                }
    n=n/10;
    i=i+1;
    }
    return
    }
    
int main()
{
   cout<<convert_to_Binary(126);

       ushort *arr= nullptr;
       arr=find_final_last_count_digit(1323445);
       for(size_t i=0;i<3;++i)
           cout<<*(arr+i)<<",";
convert_to_hexadecimal(115);

char g[8];
       sprintf(g,"%X",12);
       cout<<g;
       sprintf(g,"%o",12);
       cout<<g;
        cout<<endl;
    return 0;
}