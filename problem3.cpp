/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
 * Description: Problem 3.
 * 
 */

#include <iostream>
#include <math.h>
//function declarations
double balance(double dept,float rate, double year);

int main() {
    
    double account,interestRate,years;

    std::cout<<"Make Deposit: "<<std::endl;
    std::cin>>account;
    
    std::cout<<"Enter interest rate: "<<std::endl;
    std::cin>>interestRate;
    
    std::cout<<"Enter number of years: "<<std::endl;
    std::cin>>years;

    printf("Initial deposit: %.2f Selected Rate: %.2f Years: %.2f \n",account,interestRate,years);
    
    printf("Resulting balance:%.2f \n",balance(account,interestRate,years));

    
    return 0;
}

double balance(double dept, float rate, double year)
{
    return dept*(1+rate*year);
}
