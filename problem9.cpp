/*
 * SIGCPP
 * Programmer: Shayon Maramkhah
 * 
    problem9:  Generate a random number that falls within an interval the user supplies.
 * 
 */

#include <iostream>
#include <math.h>
#include<time.h>
#include<stdlib.h>

void lessThanSwap(int &a, int &b);
int randomNumber(int r, int lower);

int main() {
    
    int boundOne,boundTwo;
    std::cout<<"Enter user supplied interval:\n";
    std::cin>>boundOne;
    std::cin>>boundTwo;
    
    lessThanSwap(boundOne,boundTwo);
    int range = boundTwo - boundOne;
    int lowerBound = boundOne;

    printf("Interval supplied: %d - %d\n",boundOne,boundTwo);
    printf("Randomly generated number between interval: %d\n",randomNumber(range,lowerBound));
    
    return 0;
}

int randomNumber(int r, int lower)
{
      srand(time(NULL));
      int v= rand()% r+lower;
      return v;
}
void lessThanSwap(int &a, int &b)
{
    //temp variable
    int c;
    //swaps the contents of a with b if a is greater than b.
    if(a>b)
    {
        c=a+b;
        a=c-a;
        b=c-b;
    }
}

