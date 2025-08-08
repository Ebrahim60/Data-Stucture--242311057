//Count Even And Odd Number From An Array.

#include<iostream>
using namespace std;

int main()
{
    int n,even,odd;

    cout<<"Enter the number of arry element: ";
    cin>>n;

    int a[n];

    cout<<"Enter Array Element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<"Total Even Number In This Array: "<<even<<endl;
    cout<<"Total Odd Number In This Array: "<<odd<<endl;

    return 0;
}
