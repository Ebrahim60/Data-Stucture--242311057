//Maximum number find.

#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;

    cout<<"Enter Three Numbers: ";
    cin>>n1>>n2>>n3;

    int maxNum=n1;

    if(n2>maxNum)
    {
        maxNum=n2;
    }
    if(n3>maxNum)
    {
        maxNum=n3;
    }

    cout<<"Maximum number : "<<maxNum<<endl;
    return 0;
}


