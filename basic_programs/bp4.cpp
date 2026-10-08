//Leap year
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter year: ";
    cin>>a;
    if (a%400==0 || (a%4==0 && a%100!=0))
        cout<<"Leap year";
    else 
        cout<<"Not a Leap year";
    return 0;
}
