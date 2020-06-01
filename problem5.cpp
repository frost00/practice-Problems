/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
 * Description: Problem 5. Convert temperature f in Fahrenheit scale to 
 * equivalent temperature c in Celsius scale. The Fahrenheit value 
 * supplied by the user is guaranteed to be a whole number, but 
 * the resulting Celsius temperature can be fractional. Use the following
 *  formula for conversion:f= 1.8c+ 32
 * 
 */

#include <iostream>
#include <math.h>
//function declarations

double fahrenheitCelsius(int input);


int main() {
    
    int userInput;
    std::cout<<"Enter Fahrenheit:\n";
    std::cin>>userInput;
    
    printf("Conversion: %.2f",fahrenheitCelsius(userInput));
    
    return 0;
}

double fahrenheitCelsius(int inp)
{
    double returnValue = (inp-32)*(5.0/9.0);
    return returnValue;
}

