#include<iostream>
#include<string.h>
using namespace std;

class Student{
    int rollno;
    string name;
    
    public:
        void setData(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter roll no: ";
            cin>>rollno;
            }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No: "<<rollno;
        }
};

int main(){
    Student s1;
    s1.setData();
    s1.display();
    return 0;
}







