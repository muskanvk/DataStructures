/*Implement the following Sorting Algorithms for a 1-D Array.
1. Bubble Sort. 2. Insertion Sort. 3. Selection Sort.  4. Shell Sort. */


#include <iostream>
using namespace std;
int arr [100];
int n;

// Function to print an array
void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}

void bubbleSort(int arr[], int n) {
  for (int step = 0; step < n - 1; ++step) {
    // Run loops two times: one for walking throught the array
    // and the other for comparison
    int swapped = 0;
    for (int i = 0; i < n - step - 1; ++i) {
      // To sort in descending order, change > to < in this line.
      if (arr[i] > arr[i + 1]) {

        // Swap if greater is at the rear position
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        swapped = 1;
      }
    }

    // If there is not swapping in the last swap, then the array is already sorted.
    if (swapped == 0)
      break;
 
  }
}


/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	
}

// implementation of selection sort
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
	
}


/* function to sort arr using shellSort */
int shellSort(int arr[], int n)
{
	// Start with a big gap, then reduce the gap
	for (int gap = n/2; gap > 0; gap /= 2)
	{
		// Do a gapped insertion sort for this gap size.
		// The first gap elements a[0..gap-1] are already in gapped order
		// keep adding one more element until the entire array is
		// gap sorted
		for (int i = gap; i < n; i += 1)
		{
			// add a[i] to the elements that have been gap sorted
			// save a[i] in temp and make a hole at position i
			int temp = arr[i];

			// shift earlier gap-sorted elements up until the correct
			// location for a[i] is found
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];

			// put temp (the original a[i]) in its correct location
			arr[j] = temp;
		}
	}

}



int main()
{
    int option;
	cout<<"Enter the number of elements in your array";
	cin>>n;
	
	cout<<"Enter elements of the array: \n";
	
	for(int i = 1; i<n; i++){
	    cin>>arr[i];
}

        cout<< "---MENU---\n";
        cout<< " 1.BUBBLE SORT\n 2.INSERTION SORT\n 3.SELECTION SORT\n 4.SHELL SORT\n 5.EXIT\n"; 
        cout<< "Choose Option: ";
        cin >> option;  
        
        switch(option){
	    case 1: bubbleSort(arr,n);
	            break;
	    case 2: insertionSort(arr,n);
	            break;
	    case 3: selectionSort(arr,n);
	            break;
	    case 4: shellSort(arr,n);
	            break;
	    case 5: exit(0);
	}
	            
	    
    cout << "Array before sorting: \n";
	printArray(arr, n);
	
	cout << "\nArray after sorting: \n";
	printArray(arr, n);

	return 0;
}
