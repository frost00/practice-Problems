/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 
 * Problem2
 * Description: User input validation included. Print the least-significant digit of any non-negative whole number 
    the user supplies.
 * 
 */
#include <iostream>
//function declarations

int main() {
    int usernumber;
    try
    {
       std::cout<<"Enter non-negative whole number: \n";
       std::cin>> usernumber;
       if(usernumber<0){
         usernumber =usernumber*-1;
           throw usernumber;
       }
       if(usernumber%2!=0)
           throw usernumber;
    }catch(int usernumber)
    {
      std::cout<<"Invalid input\n";
    }//end catch
    printf("result %d: ",usernumber%10);

    return 0;
}
