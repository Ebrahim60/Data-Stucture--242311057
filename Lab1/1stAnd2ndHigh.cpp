//Find First And Second Higher Element From An Array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    int first=INT_MIN;
    int second=INT_MIN;
    cout<<"Enter the number of aarry element: ";
    cin>>n;

    int a[n];

    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first)
        {
            second=a[i];
        }
    }

    cout<<"First Higher Element: "<<first<<endl;
    cout<<"Second Higher Element: "<<second<<endl;

    return 0;
}

