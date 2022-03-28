#ifndef _HEAD_H_
#define _HEAD_H_
 
 class Mystr{
private :
// extraction and insertion operator are not applied as member functio as 
// the rule the rule then is left operend must be of class
// but we know  we write " cout<< obj"
// not "obj << cout"
        friend std::ostream &operator<<(std::ostream &os,const Mystr &rhs);
        friend std::istream &operator>>(std::istream &is,Mystr &rhs);
        friend bool operator==(const Mystr &lhs,const Mystr &rhs); // non member functions for compare
        friend Mystr operator+(const Mystr &lhs,const Mystr &rhs);// non member functions for concat
     char *str;
public :
     Mystr();
     Mystr(const Mystr &sc);
     Mystr(const char *s);
//     Mystr &operator=(const Mystr &rhs);
     Mystr &operator=(Mystr &&rhs);
     ~Mystr();
     Mystr operator-() const;
//     Mystr operator==(const Mystr &rhs) const;
//     bool operator==(const Mystr &rhs) const;
 //     void operator ++();
     void display() const;
     int getl() const;
     const char *getstr() const;
     };

#endif