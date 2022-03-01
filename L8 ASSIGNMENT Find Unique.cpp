//L8 ASSIGNMENT
//Find Unique
/*You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
*/

#include <iostream>
using namespace std;


int findUnique(int *arr, int size)
{
    //Write your code here
    int i=0,j=0,flag=0,no=1;
    if(size==1){
                return arr[0];
            }
    for(i;i<size;i++){
        for(j=0;j<size;j++){
            
            if(arr[i]==arr[j] && i!=j){
                break;
            }
        }
            if(j==size){
                return arr[i];
                ++no;
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
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}


