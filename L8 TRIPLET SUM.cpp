/*
L8 TRIPLET SUM
You have been given a random integer array/list(ARR) and a number X. Find and return the number of triplets in the array/list which sum to X.
Sample Input 1:
1
7
1 2 3 4 5 6 7 
12
Sample Output 1:
5
*/
#include <iostream>
using namespace std;



int tripletSum(int *input, int size, int x)
{
	//Write your code here
     int i=0,j=0,k=0,count=0;
    for(i;i<size;i++){
        for(j=i+1;j<size;j++){
            for(k=j+1;k<size;k++){
            if(input[i]+input[j]+input[k]==x){
                count++;
            }}
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}

