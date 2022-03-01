/*
Largest Row or Column
For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

*/
#include <iostream>
using namespace std;
void findLargest(int **input, int nRows, int mCols)
{
    int sumr,maxr=0,a;
    for(int i=0;i<nRows;++i)
    {
        sumr=0;
        for(int j=0;j<mCols;++j)
        {
            sumr=sumr+input[i][j];
        }
        if(sumr>maxr)
            {
                maxr=sumr;
                a=i;
            }
    }
    int sumc,maxc=0,d;
    for(int i=0;i<mCols;++i)
    {
        sumc=0;
        for(int j=0;j<nRows;++j)
        {
            sumc=sumc+input[j][i];
        }
        if(sumc>maxc)
            {
                maxc=sumc;
                d=i;
            }
    }
    if(maxc>maxr)
        cout<<"column "<<d<<" "<<maxc;
    else if (maxr==maxc&&maxc!=0&&maxr!=0)
        cout<<"row "<<a<<" "<<maxr;
    else if (maxr==0&&maxc==0)
        cout<<"row 0 -2147483648";
    else
        cout<<"row "<<a<<" "<<maxr;
    //Write your code here
}




int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}
