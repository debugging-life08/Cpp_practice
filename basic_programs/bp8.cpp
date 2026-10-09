//Reverse of a string in the same string
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    int i;
    char temp;
    cout<<"Enter name: ";
    getline(cin, s);
    int l = s.length();
    for (i=0; i<l/2; i++){
        temp = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = temp;
    }
    cout<<"Reversed string: "<<s;
    return 0;
}

