/*The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)*/

#include <iostream>

using namespace std;
#define INT_MIN -2147483648
int main()
{
     int n, i;
    
    cin  >> n;
    
    int arr[n];
     for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max         = INT_MIN;
    int second_max  = INT_MIN;
    
    
    for (i = 0; i < n; i++) {
        
        if(arr[i] > max) {
            second_max = max;
            max        = arr[i];
        }
        
        if(arr[i] < max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }
    
    cout<< second_max;

    
}
