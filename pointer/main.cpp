#include <iostream>
#include<vector>
using namespace std;


void fp(){
    double f=12.3;
    double *p = &f;// best to intialize any pointer with null
    // by assigning it to nullptr;
    // minimum pointer size is int16_t donot use int8_t
    // NOTE - pointer from any type have same  size
    int g=12;
    int *o=&g;
    // in declareation " * " is used to tell it can also dereference  the address given to pointer
    // and then use it as to give value (dereference it)
    cout<<"\n iafter init"<<o;
    cout<<"\n after init"<<*o;
    cout<<"\n after init address"<<&o;
    cout<<"\n after init size"<<sizeof o;
    cout<<"\n dbefore init"<<p;
    cout<<"\n before init"<<*p;
    cout<<"\n before init address"<<&p;
    cout<<"\n before init size"<<sizeof p<<endl;
    cout<<sizeof g<<endl;
    cout<<sizeof f<<endl;
//    p=nullptr;
    }
    
    
void deref(){
int p=12;
int f=13;
int *o=&p;
cout<<"pointer holds=            "<<o<<endl;
cout<<"pointer points the value= "<<p<<endl;
cout<<"pointer holds=            "<<&p<<endl;
cout<<"pointer points the value= "<<*o<<endl;
cout<<"pointer add=                "<<&o<<endl;
//*o=f;// value of p is changed due to the o is pointing the address of p
//and changed the the value with f
o=&f;// changing add it points to
// can work but changes the pointer value
//*o=&f;
//cant use &f it can cause problem
cout<<"pointer holds=             "<<o<<endl;
cout<<"pointer points the value= "<<f<<endl;
cout<<"pointer holds=             "<<&f<<endl;
cout<<"pointer points the value= "<<p<<endl;
cout<<"pointer holds - not now=  "<<&p<<endl;
cout<<"pointer points the value=  "<<*o<<endl;
cout<<"pointer add=                 "<<&o<<endl;
}    


void dynamicallocation(){
    // NOTE - heap or free store is only place where the object or dynamic memory
    // alocation happence it must be freed after use
//    int *p  =nullptr; //this in stack memory
//    p=new int; //this is heap new int provide a memory address in heap of type int
//    //and that address is assignend to p pointer  which is made to hold address
//    *p=12;// now derefferenceing to sassign the value 12
//    cout<<p<<endl;
//    cout<<*p<<endl;
//    delete p;
//    cout<<p<<endl;
//    cout<<*p<<endl; //  <- this so delete p is to remove the value it hold not removeinh pointer
    //can cause problem
    int *o=nullptr;
    o=new int[5];//this gives the address of first block of array
for(size_t i=0;i<5;++i)
        cin>>*(o+i);//  explained in arraynpointer
    for(size_t i=0;i<5;++i)
        cout<<*(o+i);
    delete [] o;
    }


void arrarynpointer(){
int arr[]{1,2,3,4};
int *p{arr}; // that means that name of array "&arr" is a reference
//" arr " points to the first address of array and with type it just skip
// and the value is derefferenced
cout<<arr<<endl; //proof
for(size_t i=0;i<4;++i)
    cout<<*(p+i);//pointer offset notation //cout<<*(arr+i);
    }
    void operrator(){
int arr[]{0,1,2,3,4,5,6,7,8,9};
int *p{arr};        
for(size_t i=0;i<5;++i){
    cout<<*p;//pointer offset notation //cout<<*(arr+i);
    p+=2;
    }
    //use pointer subtraction  for distance
    
}


        void constwithpointer(){
//         int x=12;
//         int y=13;
//         const int *p=&x;// 1 can be used  for geting the form a array 
//         int *const l=&x;// 2 this is used for the constraints in memory
//         const int *const g=&x;// 3 use when it is predefined and
//*g=14;//error for 1,3
//g=&y;// error for 2,3 //++l
            }


int *pointerreturn(size_t s,int value=0){
    int *p=new int[s];
    for(size_t i=0;i<s;i++)
        *(p+i)+=value;
    return p;
    }
void disforupperfunc(const int *const ptr,const size_t size){ 
        for(size_t i=0;i<size;i++)
            cout<<ptr[i];
}


void testthings(){
vector<int> x{1,2,3};
for(int f: x)
    cout<<f;
    }

//chalange
int* returnarrybig(const int *const x1,const size_t s1,const int *const x2,const size_t  s2){
 int *prt =nullptr;
 prt=new int[s1*s2];
 int pos=0;
    for(size_t i=0;i<s1;++i){
    for(size_t j=0;j<s2;++j){
        *(prt+pos)=x1[i]*x2[j];
        ++pos;
    }    
    }
    return prt;
    }
void print(const int *const x){
for(size_t i=0;i<15;++i)
    cout<<x[i]<<endl;
    }


//int** point(){
//    int **poin=nullptr;
//    int arr1[4]{4,3,2,1};
//    int arr2[4]{14,13,12,11};
//    int arr3[4]{24,23,22,21};
//    int arr4[4]{34,33,32,31};
//    int (*pt) [] {nullptr};
//    *pt [4]={arr1,arr2,arr3,arr4};
//    poin=&pt[i];
//    return poin;
//    }


int main()
{
   int16_t d{21};
   cout<<sizeof d<<UINT8_WIDTH ;// most bank for buck is uint8 =1 byte
    fp();
deref();
dynamicallocation();
arrarynpointer();
operrator();
constwithpointer();

int *ptr=nullptr;
ptr=pointerreturn(6,6);
disforupperfunc(ptr,6);
delete [] ptr;
testthings();

chalange
int a1[]{1,2,3,4,5};
int a2[]{10,20,30};


int *ptr=nullptr;
ptr=returnarrybig(a1,5,a2,3);
print(ptr);
delete [] ptr;
cout<<endl;
    return 0; 
}
