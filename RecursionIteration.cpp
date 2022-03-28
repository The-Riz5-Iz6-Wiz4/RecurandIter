#include <iostream>

//example of factorial function using iteration through for loop

int factorial {
    int n = 1;
    for (int i =1;i <= n; ++i) {
        n = n * i
    }
    return n;
}

//example of factorial function using recursion by calling the method

int facorial(int n) {
    if(n == 0)
      return 1;
    else
      return n * factorial(n -1)
}