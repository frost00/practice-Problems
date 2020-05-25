/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
 * Description: User input validation included. Problem 2.
 * 
 */

#include <iostream>
//function declarations

int main() {

    int usernumber;
    try
    {
       std::cout<<"Enter non-negative whole number: "<<std::endl;
       std::cin>> usernumber;
       if(usernumber<0){
         usernumber =usernumber*-1;
           throw usernumber;
       }
       
       if(usernumber%2!=0)
           throw usernumber;
       
    }catch(int usernumber)
    {
      std::cout<<"Invalid input"<<std::endl;
      
    }//end catch
   
    
    printf("result %d: ",usernumber%10);

    
    return 0;
}
