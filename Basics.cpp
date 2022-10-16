#include<iostream>
using namespace std;
    class Hero{
        //properties
        public:
        char level;
        int health;
        static int timetocomplete;
        Hero(){
            cout<<"Simple Constructer Called"<<endl;
        }

        Hero(int health){
            this->health = health;
        }

        Hero(int health,char level){
            this->level=level;
            this->health=health;
        }
        void print(){
            cout<<"health"<<this->health<<endl;
            cout<<"level"<<this->level<<endl;

        }
        int getHealth(){
            return health;
        }
        int getLevel(){
            return level;
        }

        void setHealth(int h){
            health = h;
        }

        void setLevel(char ch){
            level=ch;
        }
        ~Hero(){
            cout<<"Destructer is called"<<endl;
        }
    };

        int Hero::timetocomplete = 5;


    int main(){
    //     creation of object-------
    //     Hero ramesh;
    //     cout<<"Rames health is "<<ramesh.getHealth()<<endl;
        
    //     cout<<"level of ramesh is "<<ramesh.getLevel()<<endl;
    //     ramesh.setHealth(70);
    //     ramesh.level='B';
    // cout<<"health is "<<ramesh.health<<endl;
    // cout<<"level is "<<ramesh.level<<endl;
    // static allocation
    // Hero a;
    // cout<<"level is :- "<<a.level<<endl;
    // cout<<"health is :- "<<a.health<<endl;
    // //Dynamic Allocation
    // Hero *b = new Hero;
    // cout<<"level is :- "<<b->level<<endl;
    // cout<<"health is :- "<<b->health<<endl;


    // object created statically-----
    // cout<<"Hi"<<endl;
    // Hero ramesh;
    // cout<<"hello"<<endl;

    // //object created dynamically-----
    // Hero *h = new Hero;

    // Hero suresh(70, 'c');
    // suresh.print();
    // Hero R(suresh);
    // R.print();

    // static ----
    // Hero a;
    // // dynamic---
    // Hero *b = new Hero();
    // // manually destructer called----
    // delete b;
    cout<<Hero::timetocomplete<<endl;

    Hero a;

    cout<<a.timetocomplete<<endl;

    return 0;
}