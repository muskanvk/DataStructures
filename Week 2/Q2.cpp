/*Write a program to implement the following operations on a Sparse Matrix, assuming the
matrix is represented using a triplet.
(a) Transpose of a matrix.
(b) Addition of two matrices.
(c) Multiplication of two matrices. */

#include<iostream>

using namespace std;
int m,n;
int sparseMatrix[100][100];


void createSparse(){
	int size = 0;
    for (int row = 0; row < m; row++)
        for (int column = 0; column < n; column++)
            if (sparseMatrix[row][column] != 0)
                size++;

    // Defining result Matrix
    int resultMatrix[3][size];

    // Generating result matrix
    int k = 0;
    for (int row = 0; row < 5; row++)
        for (int column = 0; column < 6; column++)
            if (sparseMatrix[row][column] != 0)
            {
                resultMatrix[0][k] = row;
                resultMatrix[1][k] = column;
                resultMatrix[2][k] = sparseMatrix[row][column];
                k++;
            }

    // Displaying result matrix
    cout<<"Triplet Representation : "<<endl;
    for (int row=0; row<3; row++)
    {
        for (int column = 0; column<size; column++)
            cout<<resultMatrix[row][column]<<" ";
}

int main()
{

	cout<<"Enter number of rows and columns: ";
	cin>>m>>n;
	
	cout << "\nEnter elements of matrix: " << endl;

	for(int i=1;i<m;i++)
		for(int j=1;j<n;j++)
			cout << "Enter element a" << i + 1 << j + 1 << ": ";
		cin >> a[i][j];

	createSparse();

    return 0;
}