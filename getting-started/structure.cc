#include <iostream>
using namespace std;
struct student
{
    string  name;
    int role_no;
    int age;

};
 typedef struct employee
 {
    string name;
 } ep ;
 
int main()
{
    ep ajay;
    ajay.name="Ajay";
    cout<<ajay.name<<endl;
    struct student rohan;
    rohan.role_no=23;
    rohan.age=24;
    rohan.name="Rohan";
    cout<<rohan.name<<endl;
    cout<<rohan.age<<endl;
    cout<<rohan.role_no<<endl;
    return 0;
}