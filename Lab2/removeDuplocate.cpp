//Remove Duplicate Element From An Array.

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of arry element: ";
    cin>>n;

    int a[n];

    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Array Element After Removing Duplicate : ";

    for(int i=0; i<n; i++)
    {
        bool unique=true;
        for(int j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                unique=false;
                break;
            }
        }
        if(unique)
        {
            cout<<a[i]<<" ";
        }

    }
    cout<<endl;


    return 0;
}

