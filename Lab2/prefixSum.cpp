//Prefix sum of array element.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of arry element: ";
    cin>>n;

    int a[n],sum[n];

    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sum[0]=a[0];

    for(int i=1; i<n; i++)
    {
        sum[i]=sum[i-1]+a[i];

    }

    for(int i=0; i<n; i++)
    {
        cout<<sum[i]<<" ";

    }

    return 0;
}

