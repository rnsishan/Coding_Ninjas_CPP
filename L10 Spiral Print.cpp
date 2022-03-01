/*Spiral Print
For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
*/


#include <iostream>
using namespace std;
void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int k=1;
    int r1=0,r2=nRows-1;
    int c1=0,c2=nCols-1;
    while(k<=nRows*nCols){
        for(int i=c1;i<=c2;i++){
            cout<<input[r1][i]<<" ";
            k++;
        }
        r1++;
        for(int i=r1;i<=r2;i++){
            cout<<input[i][c2]<<" ";
            k++;
        }
        c2--;
        for(int i=c2;i>=c1;i--){
            cout<<input[r2][i]<<" ";
            k++;
        }
        r2--;
        for(int i=r2;i>=r1;i--){
            cout<<input[i][c1]<<" ";
            k++;
        }
        c1++;
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
