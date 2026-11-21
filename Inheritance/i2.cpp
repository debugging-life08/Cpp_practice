#include<iostream>
using namespace std;

class Student{
    protected:
        int rollno;
};

class Test: public Student{
    protected:
        int m1, m2;
};

class Result:public Test{
    public:
        void getdata(){
            cout<<"Enter roll and marks: ";
            cin>>rollno>>m1>>m2;
        }
        void display(){
            cout<<"Roll no: "<<rollno<<endl;
            cout<<"Total: "<<m1+m2;
        }
};

int main(){
    Result r;
    r.getdata();
    r.display();
}
