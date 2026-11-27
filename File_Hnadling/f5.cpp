#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream f;
    f.open("what.txt", ios::in | ios::app);
    string n;
    while(getline(f,n)){
        cout<<n<<endl;
    }
    f.clear();
    f<<"i am into too deep";
    f.close();
}
