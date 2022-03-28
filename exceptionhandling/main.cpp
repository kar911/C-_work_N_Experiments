#include <iostream>
using namespace std;
void normal(int m,int g){
    try{
        if (g==0)
            throw string("kmsd");
        cout<<m/g<<endl;
        }
        catch(const string &excep){
            cerr<<"error shown "<< excep<<endl; // CERR is a output type but for error
//            cout<<++excep;
            }
//    cout<<double(12)/0;// give when with double inf
    }
     int onlythrow(int m){
         if (m==0)
             throw 0; // throw  is like a return type for exception which is delt by catch
        else 
            return m;
         }
int main()
{
    int x;
    try{
        x=onlythrow(0);
        cout<<x<<endl;
        }
        catch(int &e){
         cout<<"1error found and thrown in onlythrow and resolved in main \n";   
        }
        catch(...){// ... this can handle any other exception that is not handled by the uppers
//         and u cant have any object can be used when you dont know the error
         cout<<"2error found and thrown in onlythrow and resolved in main \n";   
        }
normal(12,0);
    cout<<endl;
	return 0;
}
