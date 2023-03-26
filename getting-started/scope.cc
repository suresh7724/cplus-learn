#include <iostream>
int glo=23;
int sum()
{
    std::cout<<glo;
}
int main()
{

    int glo;
    glo=78;
    sum();
   std::cout<<glo;
    return 0;

}