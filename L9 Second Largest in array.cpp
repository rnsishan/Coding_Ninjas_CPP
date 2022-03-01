/*
You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest value for the range of Integer)
*/

#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    //Write your code here
    
    int i,large,slarge;
    
    if(n<=1 || input[0]==input[1]){
        return -2147483648;
    }
   large = input[0];
   for(i=0; i<n; i++)
   {
      if(large<input[i])
         large = input[i];
   }
   slarge = input[0];
   for(i=0; i<n; i++)
   {
      if(slarge<input[i])
      {
         if(input[i]!=large)
            slarge = input[i];
      }
   }
    return slarge;
    
    
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}














