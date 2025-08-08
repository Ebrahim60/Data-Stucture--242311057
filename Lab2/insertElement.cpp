//Insert an element into an array.

#include<iostream>
using namespace std;

int main()
{

    int a[10];
    int cs,ip,ie;

    cout<<"Enter current size: ";
    cin>>cs;

    cout<<"Enter array element: ";
    for(int i=0; i<cs; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter Insert Position: ";
    cin>>ip;
    if(ip<0 || ip>cs)
    {
        return 1;
    }

    cout<<"Enter Insert Element: ";
    cin>>ie;

    for(int i=cs; i>ip; i--)
    {
        a[i]=a[i-1];
    }
    a[ip]=ie;
    cs++;

    cout<<"Array after insert element: ";
    for(int i=0; i<cs; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}


