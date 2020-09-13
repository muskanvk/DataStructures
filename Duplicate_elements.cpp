//Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements.

/*Approach 1 : We could use an auxiliary array to store the non-duplicates and return the auxiliary array. Updating the auxilliary arr + Inserting non-duplicates in the array  = O(n²) + O(n) = O(n²)

Approach 2 : Mergesort and linear traversal of array to remove duplicate elements. Complexity : O(nlogn)

Approach 3 : We can use the Hash Table to check duplicate elements in the array. Hash Table performs searching and Insertion efficiently in O(1) average. */

#include<iostream> 
using namespace std; 
  
#include "iostream" 
#include "unordered_map" 
using namespace std; 
  
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