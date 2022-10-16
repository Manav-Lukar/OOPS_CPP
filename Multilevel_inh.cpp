#include<iostream>
using namespace std;
class animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog:public animal{

};

class GermanShefard:public dog{

};
int main(){
    GermanShefard g;
    g.speak();
    return 0;
    
}