#include <iostream>
using namespace std;
int c = 5;
int main()
{
    int c=7;

    cout<<"The global c is: "<<::c<<endl;
    cout<<"The local c is: "<<c<<endl;


    int x=56;
    int &y=x;
    cout<<"The value of y is: "<<y;

    // Type casting 
    int a=12;
    float b=22.34f;
    cout<<"The value of a is: "<<float(a)<<endl;
    cout<<"The value of b is: "<<int(b)<<endl;

    return  0;
}