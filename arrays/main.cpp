#include <iostream>
#include<climits>
#include<cfloat>
#include<cstdint>
#include<vector>
#include<array>
using namespace std;//without this we have to write std::vector
void _vectors(){
    vector <char> vowel(4);
    vowel[1]='e';
    vowel[0]='i';
    vowel[2] ='r';
    vowel.push_back('g');
    cout<<vowel.capacity() <<'\n';
    vowel.shrink_to_fit();
    cout<<"----\n";
    for(char i: vowel)
        cout<<i<<'\n';
    cout<<"----\n";
    cout<<vowel.capacity() <<'\n';
    cout<<vowel.data()<<'\n';// need continuty to show all elements 
    //method leaves the element after  finding a brea k' r, g ' are not shown
uint16_t i=534;
cout<<FLT_ROUNDS<<' '<<FLT_MAX_10_EXP<<' '<<i<<' '<<INT16_C(3)<<' '<<SHRT_WIDTH<<endl;
cout<<INT16_MAX<<'<';

    cout<<vowel[0]<<endl;
    cout<<vowel[1]<<'\n';
    cout<<vowel.at(4)<<endl;
    vector <vector<int>> ab {{1,2,3},{4,5,6}}; //2D vectors
    cout<<ab.at(1).at(1)<<'\n'; // 2D point out
//    array<int ,3> f {1,2}
//    std::vector <> ab1 {{1,2,3},{4,5,6}}; 2D vectors
    
    int s[][3]= {{1,2,2},{4,4,5},{3,2,1}};
    cout<<s[1][0]<<'\n'; // 2D point out
    cout<<"----\n";
    for(const int *i : s) {
     for(int x: {0,1,2})
        {   
            cout<<i[x]<<'\n';
        }
        cout<<"<----\n";
    }
    cout<<"----\n";
    }
    
//void array(){
//    int s [] = {1,2,3,5,6}; //count to declare
////    int b [5] {1}; // 1 at  0 and all 0's
////    int z [7] {0}; // all zero
////    int i=0;
////    for( i=0 ; i=i+1 ; i<=4){
//        cout<<s[0]<<'\n';
//        cout<<s[1]<<'\n';
//        cout<<s[2]<<'\n';
//        cout<<s[3]<<endl;
//        cout<<s[4]<<'\n';
//    cout<<"arrays"<<endl;
//    }
int main()
{ 
//    array();
_vectors();
    return 0;
}
