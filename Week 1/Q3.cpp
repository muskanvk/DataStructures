/*Question 3 : Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements.

Approach 1 : We could use an auxiliary array to store the non-duplicates and return the auxiliary array. Updating the auxilliary arr + Inserting non-duplicates in the array  = O(n²) + O(n) = O(n²)
Approach 2 : Using Mergesort to sort the data in the table O(nlogn) and then removing the duplicates from sorted data. Complexity = O(nlogn)
Approach 3 : We can use the Hash Table to check duplicate elements in the array. Hash Table performs searching and Insertion efficiently in O(1) average. 
*/

//My Approach : Used Approach 2, Complexity is O(nlogn) 
//Approach 3 was more effective but it uses a standard data structure called Hashmap so did not use it.



#include <iostream>
 using namespace std;
 
// A function to merge the two half into a sorted data.
void Merge(int *a, int low, int high, int mid)
{
    // We have low to mid and mid+1 to high already sorted.
    int i, j, k, temp[high-low+1];
    i = low;
    k = 0;
    j = mid + 1;
 
    // Merge the two parts into temp[].
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
 
    // Insert all the remaining values from i to mid into temp[].
    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
 
    // Insert all the remaining values from j to high into temp[].
    while (j <= high)
    {
        temp[k] = a[j];
        k++;
        j++;
    }
 
 
    // Assign sorted data stored in temp[] to a[].
    for (i = low; i <= high; i++)
    {
        a[i] = temp[i-low];
    }
}
 
// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        // Split the data into two half.
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
 
        // Merge them to get sorted output.
        Merge(a, low, high, mid);
    }
}
int removeDuplicates(int arr[], int n) 
{ 
    // Return, if array is empty 
    // or contains a single element 
    if (n==0 || n==1) 
        return n; 
  
    int temp[n]; 
  
    // Start traversing elements 
    int j = 0; 
    for (int i=0; i<n-1; i++) 
  
        // If current element is not equal 
        // to next element then store that 
        // current element 
        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
  
    // Store the last element as whether 
    // it is unique or repeated, it hasn't 
    // stored previously 
    temp[j++] = arr[n-1]; 
  
    // Modify original array 
    for (int i=0; i<j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
} 
 
int main()
{
    int n, i;
    cout<<"\nEnter the number of data elements: ";
    cin>>n;
 
    int arr[n];
    for(i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
 
    MergeSort(arr, 0, n-1);
    n = removeDuplicates(arr, n); 
 
    // Printing the unique elements.
    cout<<"\nUnique Elements are ";
    for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
    return 0;
}


/* Approach 2:

#include<iostream> 
using namespace std; 
#include <unordered_map> 

  
void removeDups(int arr[], int n) 
{ 
    // Hash map which will store the 
    // elements which has appeared previously. 
    unordered_map<int, bool> mp; 
  
    for (int i = 0; i < n; ++i) { 
  
        // Print the element if it is not 
        // there in the hash map 
        if (mp.find(arr[i]) == mp.end()) { 
            cout << arr[i] << " "; 
        } 
  
        // Insert the element in the hash map 
        mp[arr[i]] = true; 
    } 
} 
  
int main(int argc, char const* argv[]) 
{ 
    int arr[] = { 1, 2, 5, 1, 7, 2, 4, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    removeDups(arr, n); 
    return 0; 
} 

*/