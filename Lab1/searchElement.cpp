//Search A Element From An Array(normal search).

#include<iostream>
using namespace std;

int main()
{
    int n,item;
    bool found=false;
    cout<<"Enter the number of arry element: ";
    cin>>n;

    int a[n];

    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter Element to search: ";
    cin>>item;

    for(int i=0; i<n; i++)
    {
        if(a[i]==item)
        {
            cout<<"Item found at index: "<<i<<endl;
            found=true;
            break;
        }
    }
    if(!found)
    {
        cout<<"Item Not Found"<<endl;
    }

    return 0;
}

