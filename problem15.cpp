/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
 * Factorial: Problem 15, Print n! for a given n, 
 * rejecting a negative value for n. Rejecting a value means 
 * printing an informative (error) message and causing the program to end.
 * 
 */
#include <iostream>
int factorial(int input);

int main() 
{
    std::cout<<"Enter "<<"n"<<" factorial! \n";
    int userIn;
    std::cin>>userIn;
    
    if(userIn<0)
    {
      printf("Factorial cannot be negative %d!\n", userIn);
      return 0;
    }else
    {
     printf("Factorial %d: \n",factorial(userIn));
    }
    return 0;
}
int factorial(int input)
{
    if(input <=1){
        return 1;
    }
    return input*factorial(input-1);   
}
