//L8 ARRANGE NUMBERS IN AN ARRAY
#include <iostream>

using namespace std;

void arrange(int *arr, int n)
{
    //Write your code here
    int i=0;
    int x;
    if(n%2==0){
        x=n/2-1;
        }
    else{
        x=n/2;
    }
    for(i;i<=x;i++){
        arr[i]=2*i+1;
    }
    int even=2*(n/2);
    for(i;i<n;i++){
        arr[i]=even;
        even=even-2;
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}
