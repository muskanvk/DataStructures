  
  
/*Ques 1: Calculate the nth element of a Fibonacci sequence using:
a. Iteration.
b. Recursion. */


#include<iostream>  //Fibonacci Series using Recursion 
using namespace std; 

int fib(int n) 
{ 
	if (n <= 1) 
		return n; 
	return fib(n-1) + fib(n-2); 
} 



int fibonacci(int n) //Fibonacci Series using Iteration
{ 
      
    // Declare an array to store  
    // Fibonacci numbers. 
    // 1 extra to handle  
    // case, n = 0  
    int f[n + 2];  
    int i; 
  
    // 0th and 1st number of the  
    // series are 0 and 1 
    f[0] = 0; 
    f[1] = 1; 
  
    for(i = 2; i <= n; i++) 
    { 
          
       //Add the previous 2 numbers  
       // in the series and store it 
       f[i] = f[i - 1] + f[i - 2]; 
    } 
    return f[n]; 
    }

    int main () 
{ 
	int n = 10; 
	cout << fib(n); 
	cout<< fibonacci(n);
	return 0; 
} 

