//Delete an element from an array.

#include<iostream>
using namespace std;

int main()
{
    int n,cs,dp;
    int a[10];

    cout<<"Enter Current Position :";
    cin>>cs;

    cout<<"Enter array element: ";
    for(int i=0; i<cs; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter deleted position: ";
    cin>>dp;
    if(dp<0 || dp>=cs)
    {
        return 1;
    }

    for(int i=dp; i<cs-1; i++)
    {
        a[i]=a[i+1];
    }
    cs--;

    cout<<"Array after deleting element: ";
    for(int i=0; i<cs; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}


