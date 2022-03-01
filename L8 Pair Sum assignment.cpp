/*
Pair Sum
You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list which sum to X.
Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
7
*/

#include <iostream>
using namespace std;

int pairSum(int *input, int size, int x)
{
	//Write your code here
    int i=0,j=0,count=0;
    for(i;i<size;i++){
        for(j=i;j<size;j++){
            if(input[i]+input[j]==x){
                count++;
            }
        }
    }
    return count;
}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}


