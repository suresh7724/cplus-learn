#include <iostream>
using namespace std;

class binary{
    private: string  num;
    public:
    void read();
    void checkBin();
    void onesCompliment();
    void displayNum();

};
void binary :: read()
{
    cout<<"Enter a number"<<endl;
    cin>>num;
};

void binary :: onesCompliment()
{
    for(int i=0;i<num.length();i++)
    {
        if(num.at(i)=='0')
        {
            num.at(i)='1';
        }
        else {
            num.at(i)='0';
        }
    }
};
void binary :: checkBin()
{
    for(int i=0; i < num.length();i++)
    {
        if(num.at(i)!='0' && num.at(i)!='1')
        {
            cout<<"Incorrect binary format";
            exit(0);
        }
    }
    
}
void binary:: displayNum()
{
    cout<<"The binary number is "<<num<<endl;
}
int main (){

    binary b;
    b.read();
    b.checkBin();
    b.displayNum();
    b.onesCompliment();
    b.displayNum();
    
    return 0;
}