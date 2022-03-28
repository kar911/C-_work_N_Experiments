#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void simpleWrite(){
ofstream f{"../testx.txt"}; // normal make
    string write="kartik is a good man";
    f<<write<<endl; // endl is for flush buffer
    f.close();
    }
void simpleWrite1(){
ofstream f{"../testx1.txt",ios::trunc};// to make out of scratch
    string write="kartik is agood man yes 1";
    f<<write;
    f.close();
    }
void simpleWrite2(){
ofstream f{"../testx2.txt",ios::ate};
cout<<f.tellp();
//f.seekp(25,ios::beg); // char and refference  like form start ,end ,curr
//cout<<f.tellp();
//f.seekg();// use when using the in or ifstream to set the file ponter position 
//f.tellp();//
//f.tellg();// use when using the in or ifstream to tell the current place of file pointer
    string write="kartik is a good man 1";
    f<<write<<endl;
    cout<<f.tellp();
    f.close();
    }
void simpleWrite3(){
ofstream f{"../testx3.txt",ios::app}; // it can append 
    string write="kartik is a good man";
    f<<write<<endl;
    f.close();
    }
int main(){
   simpleWrite2();
   cout<<endl;
   return 0;
   }