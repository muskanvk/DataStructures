/* Question 2 : Implement the Binary search algorithm regarded as a fast search algorithm 
with run-time complexity of Ο(log n) in comparison to the Linear Search.*/

#include <iostream> 
using namespace std; 
  
/*  Creating a binary search function. It returns 
 location of x in given array arr[l..r] is present,  otherwise -1 */
 
int binarySearch(int arr[], int s, int e, int x) //arr is the array which want to search, s represents starting index, e is ending index and x is the element we want to find.

{ 
    if (e >= s) { 
        int mid = s + (e - s) / 2; //splitting the array into half
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray so we search the left subarray and use the function again
        if (arr[mid] > x) 
            return binarySearch(arr, s, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray so we search the right subarray and use the function again
        return binarySearch(arr, mid + 1, e, x); 
    } 
  
    // If element is not present
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result; //using ternary operator to reduce number of lines
    return 0; 
}
