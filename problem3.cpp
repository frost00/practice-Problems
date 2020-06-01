/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
    Description: Print the balance (not the interest) accrued on a deposit d in 
 * n years at annual interest rate r.
 * 
 */

#include <iostream>
#include <math.h>

 double balance( double dept, double rate,  double year);

int main() {
    
     double account,interestRate,years;

    std::cout<<"Make Deposit: \n";
    std::cin>>account;
    
    std::cout<<"Enter interest rate: \n";
    std::cin>>interestRate;
    
    std::cout<<"Enter number of years: \n";
    std::cin>>years;

    printf("Initial deposit: %.2f Selected Rate: %.2f Years: %.2f \n",account,interestRate,years);
    
    printf("Resulting balance:%.2f \n",balance(account,interestRate,years));

    
    return 0;
}

 double balance( double dept,  double rate,  double year)
{
    return dept*(1+rate*year);
}
