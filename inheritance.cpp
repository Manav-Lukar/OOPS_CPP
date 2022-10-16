#include<iostream>
using namespace std;
class human{
    public:
    int height;
    int age;
    int weight;

    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight=w;
    }
};

class Male:public human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
};


int main(){
    Male akshit;
    cout<<akshit.age<<endl;
    cout<<akshit.weight<<endl;
    cout<<akshit.height<<endl;
    cout<<akshit.color<<endl;
    akshit.setWeight(62);
    cout<<akshit.weight<<endl;
    akshit.sleep();
    return 0;
}