#include <iostream>
using namespace std;
int main()
{
    enum Meal {breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    Meal m1=breakfast;
    Meal m2=dinner;
    cout<<m1<<endl;
    return 0;
}