#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("what.txt");
    if (fin.is_open()){
        cout<<"File successfully opened"<<endl;
    }
    else{
        cout<<"Doest exist";
    }
    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }
    fin.close();
}
