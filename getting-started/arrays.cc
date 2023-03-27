#include <iostream>
using namespace std;
int main()
{
    int arr[4]={23,54,65,76};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<arr[i]<<endl;

    }
    // int p=arr; prints address
    cout<<endl;
    int *p=arr;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    return 0;
}