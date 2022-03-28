#include <iostream>
#include <iomanip>
using namespace std;
void boolean(){
    //default
    std::cout<<(10==20)<<std::endl;
    std::cout<<(10==10)<<std::endl;
    //manipulator
    std::cout<<std::boolalpha;
    std::cout<<(10==20)<<std::endl;
    std::cout<<(10==10)<<std::endl;
    //setf method
//    std::cout.setf(std::ios::boolalpha);
//    std::cout<<(10==20)<<std::endl;
//    std::cout<<(10==10)<<std::endl;
//setf method 
   std::cout.setf(std::ios::boolalpha);
    std::cout<<(10==20)<<std::endl;
    std::cout<<(10==10)<<std::endl;
    //
    std::cout<<std::resetiosflags(std::ios::boolalpha); // use iomanip for resetiosflags
    std::cout<<(10==20)<<std::endl;
    std::cout<<(10==10)<<std::endl;
    }
void interger(){
    int d=0x12;
    int v=010;
    int b=255;
cout<<d<<endl;
cout<<v<<endl;
cout<<dec<<b<<endl;
cout<<hex<<b<<endl;
cout<<oct<<b<<endl;
cout<<showbase<<uppercase; // to show that these are hec and ocy not string or char
cout<<dec<<b<<endl;
cout<<hex<<b<<endl;
cout<<oct<<b<<endl;
cout<<noshowbase<<nouppercase;// undo show base
cout<<dec<<b<<endl;
cout<<hex<<b<<endl;
cout<<oct<<b<<endl;
cout<<showpos; //to show + sign
cout<<dec<<b<<endl;
cout<<hex<<b<<endl;
cout<<oct<<b<<endl;
cout<<noshowpos; //to noshow + sign
cout<<dec<<b<<endl;
cout<<hex<<b<<endl;
cout<<oct<<b<<endl;
    }
    void floating(){
//        double f=23223.13; // this will display 23223.1
//        double f=232234.13; // this will display 232234 as default is  digit
        cout<<setprecision(16);
        double f=232234.1331313;
        cout<<f<<endl;
        cout<<setprecision(10); //10 digit allowed to be displayed
        cout<<f<<endl;
//        cout<<fixed;
        cout<<setprecision(10)<<fixed; // it will allow to make 10 digit after decimal to show
        // before wale kitne bhi ho sakte hai
        cout<<f<<endl;
        cout<<setprecision(7)<<scientific; // show 2.3223413e+05 dot ke bad 7 digits
        cout<<f<<endl;
cout<<setprecision(7)<<scientific<<showpos; // show 2.3223413e+05 dot ke bad 7 digits
        cout<<f<<endl; 
        cout.unsetf(ios::scientific | ios::showpos);
        cout<<showpoint<<f<<endl;
       }
       
       void coutthing(){
           cout<<setfill('-'); // fill wall the thing
           cout<<setw(12+5)<<"always happy\n"; // in this  it start with 12
           cout<<setfill('=');
           cout<<setw(9+1)<<"never bad"; // it differ with the character
           }
void m(){
    cout<<boolalpha<<(10>2);
    }
int main()
{
//    m();
//    boolean();
//interger();
//floating();
coutthing();
   std::cout<<std::endl;
	return 0;
}
