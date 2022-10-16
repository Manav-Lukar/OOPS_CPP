//EXAMPLE----

#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;

    public:
    void setSalary(int s){
        salary = s;
    }

    int getSalary(){
        return salary;
    }
};

int main(){
    Employee shubham;
    shubham.setSalary(45000);
    cout<<shubham.getSalary();
}