/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
    problem11: Print the greatest of any three user-supplied numbers a, b, and c.
 * 
 */
#include <iostream>

void greaterThanPrint(double a, double b,double c);

int main() {
    
    double numOne,numTwo,numThree;
    std::cout<<"Enter user two numbers:\n";
    std::cin>>numOne;
    std::cin>>numTwo;
    std::cin>>numThree;
    
    greaterThanPrint(numOne,numTwo,numThree);
    return 0;
}
void greaterThanPrint(double a, double b, double c)
{
    if(a>b && a>c)
    {
      printf("Greatest number: %.2f\n",a);
    }else if(b>a && b>c)
    {
      printf("Greatest number: %.2f\n",b);
    }else
    {
      printf("Greatest number: %.2f\n",c);
    }
}
