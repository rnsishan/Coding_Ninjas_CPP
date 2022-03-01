/*You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).*/
#include <iostream>
using namespace std;

#include "solution.h"

void rotate(int *input, int d, int n)
{
     int i,j;        
    int temp[d];
    
    for(i=0;i<d;i++){
        temp[i]=input[i];
    }
    for(j=d;j<n;j++){
        input[j-d]=input[j];
    }
    for(int k=0;k<d;k++){
        input[n-d+k]=temp[k];
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

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
