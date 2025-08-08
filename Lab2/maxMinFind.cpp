//Insert an element into an array.

#include<iostream>
using namespace std;

int main()
{
    int n;


    cout<<"Enter the number of array element: ";
    cin>>n;

    int a[n];

    cout<<"Enter array element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int maxElement=a[0];
    int minElement=a[0];
    int maxIndex=0;
    int minIndex=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>maxElement)
        {
            maxElement=a[i];
            maxIndex=i;
        }

        if(a[i]<minElement)
        {
            minElement=a[i];
            minIndex=i;
        }
    }

    cout<<"\nMax Element : "<<maxElement<<" Index : "<<maxIndex<<endl;
    cout<<"\nMin Element : "<<minElement<<" Index : "<<minIndex<<endl;


    return 0;
}


