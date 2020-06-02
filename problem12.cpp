/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
    12. Determine if a number the user supplies is positive, negative, or zero.
 * 
 */
#include <iostream>

void posNegZero(double input);

int main() {
    
    double in;
    std::cout<<"Enter number:\n";
    std::cin>>in;
    posNegZero(in);
    
    return 0;
}
void posNegZero(double input)
{
    if(input>0)
    printf("User supplied a positive number: %.2f",input);
    else if(input<0)
    printf("User supplied a negative number: %.2f",input);
    else
    printf("User supplied zero: %.2f",input);
}

