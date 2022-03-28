#include <iostream>
using namespace std;
    class Player{
        private:
            int score;
            int health;
        public:
            void gethealth(int health);
            void getscore(int score);
            void status(Player p);
            Player(int x,int y);
            Player(const Player &scource);
            ~Player(){cout<<"game over";}
    };
    
    Player::Player(const Player &source):health{source.health},score{source.score}{
        cout<<"teleport"<<endl;
        }
   void Player::status(Player p){
        cout<<"HP"<<p.health<<endl;
         cout<<"SC"<<p.score<<endl;
        }
    
//   void Player::damage(int d){
//        health-=d;
//        cout<<thihealth<<"damage done is "<<d;
//        }

    Player::Player(int health=100,int score=1){
        cout<<"conatructor is called with no \n";
        cout<<this->health<<" "<<this->score<<endl;
    }

class Deep{
    private:
        int *data;
    public:
        void sett(int d){*data=d;}
        int gett(){return *data;}
        Deep(int d){// one par constructor
        data=new int;
        *data=d;
}

//here in deep copy we are using deligate consructor and it helps to call the one argument constructor
    Deep(const Deep &sc):Deep{*sc.data}{// deep copy copy both data and assign to new refferecne
//        data=new int;// it is equal    `|        //use deep copy when we have raw pointer to heap area and playing with it
//        *data=*sc.data; // to this -----|
        cout<<"copy const"<<endl;
        }
        
        //not to use when we point heap area and playing with it can cause 
        //problem like you deleted the refference of 1st obj then when you destroy
        // it that final destroy point in unaccessable memory loc rais execption
//    Deep(const Deep &sc):data(sc.data){ // this is shallow  copy  it is default copy type by comiler
//        cout<<"copy const"<<endl;
//        }
    ~Deep(){
        delete data;
        cout<<"removed object"<<endl; }
    };
void display(Deep s){
        cout<<s.gett()<<endl;
        }

int main()
{
//    Player p;
//    Player l{p};
//    p.status( p);
//    l.status( l);
   Deep ob1{100};
   display(ob1);
   Deep ob2{ob1};
   ob2.sett(1000);
   display(ob2);
   cout<<endl;
	return 0;
}
