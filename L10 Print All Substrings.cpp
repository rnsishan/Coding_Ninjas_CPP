/*
Print All Substrings

For a given input string(str), write a function to print all the possible substrings.
*/

#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    // Write your code here
  
    int n=strlen(input);
 for (int len = 1; len <= n; len++)
    {   
     	for (int i = 0; i <len; i++)
        {
            int j =len-1;           
            for (int k =i; k <= j; k++)
                cout << input[k];
            cout << endl;
        }
     
    }
    
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
