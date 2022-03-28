#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void read(){
    ifstream filee;
    string line;
    filee.open("../testtxt"); // ../ is for going back one step folder
    if(!filee){
        cerr<<"cant open \n";
//        return 1;
//        std::exit(1); // to terminate
        }
//cout<<"open";    
//while(!filee.eof()){
//    filee>>line;
//cout<<line<<endl;}
while(filee>>line)
    cout<<line<<endl;
    
filee.close();
    }
    void poem(){
//        ifstream f;
//        f.open("../testtxt");
//        string l;
//        while(getline(f,l))
//            cout<<l<<endl;
//        f.close();
ifstream f;
        f.open("../testtxt");
        char c{};
        while(f.get(c))
            cout<<c;
        f.close();
         }
         ushort gradefind(const string &gr){
            ushort cn;
            char c [5]{'A','B','C','D','E'}; 
            for (size_t i=0;i<5;++i){
                if (gr[i]==c[i])
                    ++cn;
                }
             return cn;
             }
void chalange(){
        ifstream f;
        f.open("../asd");
        ushort i=0,sum=0;
        string grade,name;
        while(f>>grade>>name){
                ushort score = gradefind(grade);
                cout<<setfill(' ')<<name<<setw(20)<<score<<endl;
                sum+=score;
                ++i;
        }
        cout <<"average is "<<setprecision(3)<<double(sum)/i<<endl;
f.close();
        }
        void chalange2(const string fi){ // find word in file
            ifstream f;
            f.open("../asd");
            string g;
            int count=0;
            while(f>>g){
                if(string::npos!=g.find(fi))// g.find(fi) gives the position for the fi in g
// if  not found gives npos and if found give position 
                    ++count;
                }
                cout<<count<<endl;
            f.close();
            }
int main(){
//    read();
//poem();
//chalange();
chalange2("a");
//string s="kartik moyade is very good";
//cout<<s.find_last_of("k");
//cout<<s.find

   cout<<endl;
   return 0;
   } 