//Sum of Array Element.

#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;

    cout<<"Enter the number of array element: ";
    cin>>n;

    int a[n];

    cout<<"Enter array element: ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }

    cout<<"Sum of array element: "<<sum<<endl;

}



