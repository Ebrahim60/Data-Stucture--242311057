//Reverse Array Element.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The number of array element : ";
    cin>>n;

    int a[n];
    cout<<"Enter array element: ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    };

    cout<<"Array before revesing: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Array after revesing: ";
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
}
