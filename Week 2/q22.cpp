#include<iostream>

using namespace std;



int main()
{
    int sparseMatrix[100][100];
    int m,n,t,q;
    cout<<"Enter number of rows and columns: ";
    cin>>m>>n;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << "Enter element a" << i + 1 << j + 1 << ": \n";
            cin >> sparseMatrix[i][j];
        }

    // Finding total non-zero values in the sparse matrix
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

        cout<<endl;
    }

   resultMatrix[0][1]=n; resultMatrix[0][2]=m; resultMatrix[0][3]=t;
   q=1;
 
// transpose of the matrix
   if(t>0)
   {
      for(i=1;i<=n;i++)
      {
     for(j=1;j<=t;j++)
     {
        if(sparse[j][2]==i)
        {
        transpose[q][1]=resultMatrix[j][2];
        transpose[q][2]=resultMatrix[j][1];
        transpose[q][3]=resultMatrix[j][3];
        q=q+1;
        }
     }
      }
   }
 
   cout<<"\n\nThe transpose of the sparse matrix :\n ";
   cout<<"\nRow\tColumn\tElement\n\n";
   cout<<resultMatrix[0][1]<<"\t"<<resultMatrix[0][2]<<"\t"<<resultMatrix[0][3]<<"\n\n";
   for(i=1;i<=t;i++)
   {
      cout<<transpose[i][1]<<"\t"<<transpose[i][2]<<"\t"<<transpose[i][3]<<"\n";
   }
    return 0;
}