/*
You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
*/
#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    //Write your code here
    int lo = 0;
    int hi = n- 1;
    int mid = 0;
 
    while (mid <= hi) {
        switch (arr[mid]) {
 
         case 0:
            swap(arr[lo++], arr[mid++]);
            break;
 
 
        case 1:
            mid++;
            break;
 
        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
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
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}
