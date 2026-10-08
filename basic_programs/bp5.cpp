//Pallindrome
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, rem, rev=0;
    cout<<"Enter number: ";
    cin>>n;
    int num = n;
    while(n!=0){
        rem = n%10;
        rev = rev*10+rem;
        n= n/10;
    }
    cout<<"Reverse: "<<rev<<endl;
    if (num==rev)
        cout<<"Pallindrome";
    else 
        cout<<"Not a Pallindrome";
    return 0;
}
