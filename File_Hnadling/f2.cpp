#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("data.txt");
    int age;
    string name;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    fout<<"Name: "<<name<<endl;
    fout<<"Age: "<<age<<endl;
    fout.close();
}
