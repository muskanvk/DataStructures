//Question 5 : Design the logic to find the missing number in a sorted array.
// The complexity of this solution will be O(logn) as I am using the approach of binary search to find the missing number and then 
//further we are dividing the array from the middle i.e n/2

#include <iostream> 
using namespace std; 


int findMissing(int arr[], int N) //passing array and size as the arguments
{ 
	int left = 0, right = N - 1; //binary search approach used to find the missing number
	while (left <= right) { 

		int mid = (left + right) / 2; 

		// If the middle element is not on
		// the middle index, then the missing element is mid + 1.
		if (arr[mid] != mid + 1 && arr[mid - 1] == mid) 
		{
            return mid + 1;          
        }

		// This case means that the missing element is
		// not to the left. So search the right.	
		if (arr[mid] == mid + 1) 
			left = mid - 1; 

		// This case means that the missing element is not
		// to the right. So search the left.
		else
			left = mid + 1; 
	} 

	// Will reach here if no missing element found.  
	return -1; 
} 

// Driver code 
int main() 
{ 
	int arr[] = {1,2,3,4,6,7,8}; 
	int size = sizeof(arr)/sizeof(arr[0]); 
	cout << "The missing element is: " << findMissing(arr, size); 
	return 0; 
} 