#include <iostream>
using  namespace std;
int sum(int num1,int num2)
{
    return num1+num2;
}

int main()
{
    int num1, num2,total;
    cout<<"Enter number 1\n";
    cin>>num1;
    cout<<"Enter number 2\n";
    cin>>num2;
    total=sum(num1,num2);
    cout<<"Sum of number 1 and 2 is : "<< total;
}
