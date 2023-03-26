#include <iostream>
int sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}
int main()
{
    int num1,num2,total;

    std::cout<<">>Enter number 1\n";  
    // << is a instertion operator used to show output

    std::cin>>num1; 
    // >> this is an extraction operator used to show output
    std::cout<<"Enter number 2\n";
    std::cin>>num2;
    total=sum(num1,num2);
    std::cout<<"Sum of number 1 and number 2 is: "<<total;
}