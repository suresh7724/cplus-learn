#include <iostream>
using namespace std;
typedef union salary{
    int rs;
    float usd;
    char words;
} sy ;
int main()
{
    sy adity;
    adity.rs=123;
    adity.usd=123.54;
    cout<<adity.rs<<endl; 
    cout<<adity.usd<<endl; 
    return 0;
}