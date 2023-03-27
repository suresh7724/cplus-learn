#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age == 0)
    {
        cout<<"You are not born yet"<<endl;
    }else if(age<18)
    {
        cout << "You are young!"<<endl;
    }else if(age>18)
    {
        cout << "You are old"<<endl;
    }

    return 0;
}