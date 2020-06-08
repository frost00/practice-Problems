/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
    Description: Swap  (that  is,  interchange)  the  content  of  two  floating-point  variables a
 * and b, both  of which  are initialized by the user. Print the values in both 
 * variables before swapping and after swapping.
 * 
 */
#include <iostream>

int main() {
    
    float a,b;
    std::cout<<"Enter number a and b:\n";
    std::cin>>a;
    std::cin>>b;
    
    printf("User input a: %.2f and User input b: %.2f \n",a,b);
    
   
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped input a: %.2f and User input b: %.2f \n",a,b);

    return 0;
}


