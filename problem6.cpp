/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
 * Description: Convert an angle din degrees to an equivalent angle rin radians. 
 * The angle in either scale could be fractional. 
 * The conversion should be based on the fact that 2π radians equal 360 degrees.
 * 
 */

#include <iostream>
#include <math.h>

//function declarations

double degreeRadian(double input);


int main() {
    
    double userInput;
    std::cout<<"Enter Angle in degrees: "<<std::endl;
    std::cin>>userInput;
    
    printf("Conversion: %.4f",degreeRadian(userInput));
    
    return 0;
}

double degreeRadian(double inp)
{
   
    double returnValue = (inp)*(M_PI/180);
    return returnValue;
}

