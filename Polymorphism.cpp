//COMPILE TIME POLYMORPHISM-----

#include<iostream>
using namespace std;

class a{
    public:
    void sayHello(){
        cout<<"HELLO Manav"<<endl;
    }

// FOR FUNCTION OVERLOADING WE HAVE TO CHANGE IN INPUT ARGUMENT ALWAYS--


    void sayHello(string name){
        cout<<"HELLO"<<name<<endl;
    }
};

int main(){

    a obj;
    obj.sayHello();
    return 0;
}
    
