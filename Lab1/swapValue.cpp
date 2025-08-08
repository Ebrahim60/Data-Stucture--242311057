//Swapping Value without User Extra Variable.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Two Numbers : ";
    cin>>num1>>num2;

    cout<<"Value Before Swapping: num1= "<<num1<<" num2= "<<num2<<endl;
    cout<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<"Value After Swapping: num1= "<<num1<<" num2= "<<num2<<endl;
}


