//Binary Search Ascending Order.

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

    int Beg=0;
    int End=n-1;
    int item;
    int Loc=-1;

    cout<<"Enter Element to search : ";
    cin >>item;

    int mid=(Beg+End)/2;

    while(Beg<=End && a[mid]!=item)
    {
        if(item<a[mid])
        {
            End=mid-1;
        }
        else
        {
            Beg=mid+1;
        }
        mid=(Beg+End)/2;
    }

    if(a[mid]==item)
    {
        Loc=mid;
    }

    cout<<item<<" found at position " <<Loc<<endl;


    return 0;
}


