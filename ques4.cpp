/* 3) Implement the logic to:
1. Reverse the elements of an array.
2. Find Mean, Mode, Median in an array.
3. Find the Matrix Multiplication.
4. Find the Transpose of a Matrix.
*/

#include <bits/stdc++.h> 
using namespace std;

int n; //size of the array
float arr[100]; //declaring the array



void reverseArray()
{   
	int j;
	cout<<"Enter the size of array: ";
	cin>>n;

    //input in the array
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
    	cin>>arr[i];
    }

    for(int i=0,j=n-1;i<n/2;i++,j--)
	{
		int temp= arr[i];
		arr[i]= arr[j];
		arr[j]= temp;
	}
    cout << "Reversed Array is :";
    for(int i=0;i<n;i++)
      { 
		cout<< arr[i]<< "";
      }
}     

//finding mean of the ungrouped data in array
void mean(){
	cout<<"Enter the size of array: ";
	cin>>n;

    //input in the array
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    	cin>>arr[i];

    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; 
      }
    cout<< "Mean of the array is : ";
    cout<< (double)sum/(double)n;
}

//finding median of the ungrouped data in the array
void median(){
	cout<<"Enter the size of array: ";
	cin>>n;

    //input in the array
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    	cin>>arr[i];
    

    //sort the array
    sort(arr, arr + n);
    cout<< "Median of the array is : ";
    if(n % 2 == 0)
        cout << (double)(arr[n/2 - 1] + arr[n/2])/2;

    cout << (double)arr[n/2];
}

//finding mode of ungrouped data
void mode(){

	cout<<"Enter the size of array: ";
	cin>>n;

    //input in the array
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    	cin>>arr[i];
    int start = 0; 
    int end = n-1;

    // Sort the array 
    sort(arr, arr + n); 
  
    //finding max frequency  
    int max_count = 1, res = arr[0], count = 1; 
    cout << "Mode of the array is : ";

    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            count++; 
        else { 
            if (count > max_count) { 
                max_count = count; 
                res = arr[i - 1]; 
            } 
            count = 1; 
        } 
    } 
  
    // when the last element is most frequent 
    if (count > max_count) 
    { 
        max_count = count; 
        res = arr[n - 1]; 
    } 
    
    cout <<  res;
}

void matrixMultiplication(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
cout<<"enter the number of row = ";    
cin>>r;    
cout<<"enter the number of column = ";    
cin>>c;    
cout<<"enter the first matrix element =\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>a[i][j];  
}    
}    
cout<<"enter the second matrix element =\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cin>>b[i][j];    
}    
}    
cout<<"multiplication of the matrix =\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}      
}

void matrixTranspose(){
   int a[10][10], transpose[10][10], row, column, i, j;

   cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;

   cout << "\nEnter elements of matrix: " << endl;

   // Storing matrix elements
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }

   // Printing the a matrix
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << a[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }

   // Computing transpose of the matrix
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = a[i][j];
      }

   // Printing the transpose
   cout << "Transpose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }
}

int main(){
	int option;
		
	{	
		cout<< "---MENU---\n";
		cout<< " 1.REVERSE ARRAY\n 2.FIND MEAN\n 3.FIND MEDIAN\n 4.FIND MODE\n 5.MATRIX MULTIPLICATION\n 6.TRANSPOSE MATRIX\n 7.EXIT\n"; 
		cout<< "Choose Option: ";
		cin >> option;	
		switch(option)
		{	
			
			
			case 1: reverseArray();
					break;	
			case 2: mean();	
					break;
			case 3: median();
					break;
			case 4: mode();
					break;
			case 5: matrixMultiplication();
					break;
			case 6: matrixTranspose();
			        break;
			case 7: exit(0);
			        break;

			default: { cout<<"Invalid Option";
			           break;
			         }
		}
	};
	
}
