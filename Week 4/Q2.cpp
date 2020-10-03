/*Ques 2: Calculate the factorial of a number using:
a. Iteration.
b. Recursion. */

#include <iostream> 
using namespace std; 
  
// function to find factorial of given number 
unsigned int factorial(unsigned int n)  // Factorial using Recursion
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 


  
//function to find factorial of given number 
unsigned int fact(unsigned int n)  // Factorial using Iteration
{ 
	int res = 1, i; 
	for (i = 2; i <= n; i++) 
		res *= i; 
	return res; 
} 

// Driver code 
int main() 
{ 
	int num = 5; 
	cout << "Factorial of "<< num << " is "<< factorial(num) << endl; 
	return 0; 
} 


