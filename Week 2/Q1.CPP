/*Assuming array is used to store elements of the following matrices, implement an efficient way that reduces the space requirement.
(a) Diagonal Matrix.
(b) Tri-diagonal Matrix.
(c) Lower triangular Matrix.
(d) Upper triangular Matrix.
(e) Symmetric Matrix. */


#include<iostream>
using namespace std;
int m,n,i,j;
int flag = 0; int A[100][100];


void creatematrix(){
 cout << "Enter number of rows and columns : ";
    cin >> m >> n;
    if (m != n)
    {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }
    cout << "Enter elements of matrix : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) 
            cin >> A[i][j];
}


void diagonalmatrix()
{
    creatematrix();
   
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (i == j)           {
                if (A[i][j] == 0)
                    flag = 1;
            }
            else
            {
                if (A[i][j] != 0)
                    flag = 1;
            }
    if (flag == 1)
        cout << "The given array is not a diagonal matrix.";
    else
    {
        cout << "The entered array is a diagonal matrix.\n ";   
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++) 
                cout << A[i][j] << " ";
            cout << "\n ";
        }
    }
    
}

void upperTriangular()
{
    creatematrix();
    for (i = 1; i < m; i++)
        for (j = 0; j < m; j++)
            if (A[i][j] != 0)
            flag = 0;
        else
            flag = 1;

    if (flag == 1)
        cout << "Upper Triangular Matrix";
    else
        cout << "Not an Upper Triangular Matrix";
  
}


void lowerTriangular()
{
    creatematrix();
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (A[i][j] != 0)
                cout<<"Not Lower triangular";
        else
            cout<<"It is a Lower Triangular Matrix";
}


void symmetric(){
    // Efficient c++ code for check a matrix is 
// symmetric or not. 
    creatematrix();
    for (i = 0; i < m; i++) 
        for (j = 0; j < m; j++) 
            if (A[i][j] != A[j][i]) 
                cout<<"Not a symmetric Array";
    else
        cout<<"This is a symmetric array";
}

// Driver code 
int main(){
        int option; 
       
        cout<< "---MENU---\n";
        cout<< " 1.DIAGONAL MATRIX\n 2.UPPER TRIANGULAR MATRIX\n 3.LOWER TRIANGULAR MATRIX\n 4.SYMMETRIC MATRIX\n 5.TRIDIAGONAL MATRIX\n 6.EXIT\n"; 
        cout<< "Choose Option: ";
        cin >> option;  
        switch(option)
        {   
            
            case 1: diagonalmatrix();
                    break;  
            case 2: upperTriangular(); 
                    break;
            case 3: lowerTriangular();
                    break;
            case 4: symmetric();
                    break;
            case 5: exit(0);
        }
    
    
}