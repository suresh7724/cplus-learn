#include <iostream>
using namespace std;

class Employee{
    private:
        int a,b,c;
     public:  
        int d,e,f;
    
    void setData(int a1,int b1,int c1,int d1);
    void getData()
    {
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
        cout<<"Value of c is: "<<c<<endl;
        cout<<"Value of d is: "<<d<<endl;
        cout<<"Value of e is: "<<e<<endl;
    }

};
void Employee::setData(int a1,int b1,int c1,int d1)
{
    a=a1;
    b=b1;
    c=c1;
    d=d1;
};
int main()
{
    Employee rohan;
    Employee ajay;
    ajay.d=54;
    rohan.d=65;
    ajay.e=11111111;
    rohan.e=22222;
    ajay.setData(43,54,65,76);
    rohan.setData(1,2,3,4);
    rohan.getData();
    ajay.getData();
    return 0;
}