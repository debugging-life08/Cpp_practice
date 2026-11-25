#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("what.txt");
    fout<<"Hellooooo"<<endl;
    fout<<"I dont like exams"<<endl;
    fout.close();
}
