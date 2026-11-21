#include<iostream>
using namespace std;

class Rectangle{
    public:
        int length, breadth;
};

class Area: public Rectangle{
    public:
        void getdata(){
            cout<<"Enter l and b: ";
            cin>>length>>breadth;
        }
        void a(){
            cout<<"Area: "<< length*breadth <<endl;
        }
};

int main(){
    Area r;
    r.getdata();
    r.a();
}
