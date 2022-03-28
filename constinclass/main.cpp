#include<iostream>
//#include<string>
//#include<vector>
using namespace std;

//const correctness
class sample{
private:
    static int num;
    int tobechanged =0;
public:
static int nump(){
return num;
    }
    int getnm() const{ // this const is a aggrement b/w you n compiler that noting will be changed
    //in this function as to follow the const propperty of object
        return tobechanged;
        }
        sample(int x):tobechanged(x){
            ++num;
            cout<<"constructor called \n";
            }
    };
int sample::num{0};
int main()
{
   const sample d{123};
   cout<<sample::nump()<<endl;
    sample f{14};
   cout<<d.getnm()<<endl;
   cout<<sample::nump()<<endl;
   cout<<f.getnm()<<endl;
   cout<<endl;
	return 0;
}
