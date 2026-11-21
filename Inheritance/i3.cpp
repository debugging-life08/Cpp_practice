#include<iostream>
using namespace std;

class Employee{
    protected:
        int id;
    public:
        Employee(int i){
            id = i;
        }
};

class Manager:public Employee{
    protected:
        int salary;
    public :
        Manager(int i, int s):Employee(i){
            salary=s;
        }
        void display(){
            cout<<"id: "<<i<<endl<<"salary: "<<s;
        }
};


