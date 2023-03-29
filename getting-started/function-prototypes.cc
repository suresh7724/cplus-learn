#include <iostream>
using namespace std;
// function prototyping
int sum(int a, int b);
void g();
int main()
{
    int a=4,b=6;
    cout<<sum(a,b)<<endl;
    g();
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}
void g(){
    cout<<"\n Hello good morning"<<endl;
}