#ifndef _TESTTHEAD_H_  // is to check weaether the header file is included  if not it will include 
#define _TESTTHEAD_H_ // if includeed jump to the last statement   
class Acunt{
private:
    int x=69;
    int y=69;
//    char ar[]{' '};
public:
Acunt(int h);//constructor
Acunt(int h,int j);//constructor -cant return-
Acunt();
    void setx(int x);
    int getx();
    ~Acunt();//distructor -cant return- used for freeing resource ,closeing file,release memory
    };
#endif // Here