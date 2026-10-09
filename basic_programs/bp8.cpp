//Reverse of a string with a second string
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s, rev;
    int i;
    cout<<"Enter name: ";
    getline(cin, s);
    int l = s.length();
    for (i=l-1; i>=0; i--)
        rev = rev + s[i];
    cout<<"Reversed string: "<<rev;
    return 0;
}

