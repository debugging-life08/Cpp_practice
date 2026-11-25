#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("multiplication.txt");
    int n, i;
    cout<<"Enter number: ";
    cin>>n;
    for(i=1; i<=n; i++){
        fout<<n<<" x "<<i<<" = "<<n*i;
    }
    fout.close();
}
