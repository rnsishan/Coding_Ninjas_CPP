/*
Sort 0 1
You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.
Sample Input 1:
1
7
0 1 1 0 1 0 1
Sample Output 1:
0 0 0 1 1 1 1
*/
#include <iostream>
#include <algorithm>


void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int i=0,j=0,count=0;
    for(i=0;i<size;i++){
        if(input[i]==0){
            count++;
         	
        }
        }
    for(int i=0;i<count;i++)
  {
    input[i]=0;
  }
  for(int i=count;i<size;i++)
  {
    input[i]=1;
  }
    
}


int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
