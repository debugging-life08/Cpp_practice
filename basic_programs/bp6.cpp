//Array Sum and average
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, i, a[50], sum=0, avg;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for (i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        sum = sum + a[i];
    avg = sum/n;
    int min=a[0], max = a[0];
    for (i=0; i<n; i++){
        if (a[i]>max)
            max = a[i];
        if (a[i]<min)
            min = a[i];
    }
    cout<<endl<<"Sum: "<<sum;
    cout<<endl<<"Average: "<<avg;
    cout<<endl<<"Largest: "<<max;
    cout<<endl<<"Smallest: "<<min;
    return 0;
}
