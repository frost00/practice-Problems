/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
    problem10: Print the greater of any two user-supplied numbers a and b.
 * 
 */
#include <iostream>

void greaterThanPrint(double a, double b);

int main() {
    
    double numOne,numTwo;
    std::cout<<"Enter user two numbers:\n";
    std::cin>>numOne;
    std::cin>>numTwo;
    
    greaterThanPrint(numOne,numTwo);
    return 0;
}
void greaterThanPrint(double a, double b)
{
    if(a>b)
    {
      printf("Greatest number: %.2f\n",a);
    }else
    {
      printf("Greatest number: %.2f\n",b);
    }
}

