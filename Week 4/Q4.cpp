//Ques 4: Write a program for calculating the length of a string using Recursion.



#include <iostream> 
using namespace std; 

/* Function to calculate length */
int recLen(char* str)	 
{ 
	// if we reach at the end of the string 
	if (*str == '\0') 
		return 0; 
	else
		return 1 + recLen(str + 1); 
} 


int main() 
{ 
	char str[] = "HelloIamcountingthenumberofcharacters"; 
	cout << recLen(str); 
	return 0; 
} 
