/*
Check Permutation
For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
*/

#include <iostream>
#include <cstring>
using namespace std;
#include<cstring>
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
  if(strlen(input1)!=strlen(input2))
  {
      return false;
  }
    int len = strlen(input1);
        int arr[256]={0};
        int index=0;
        int i=0;
        for(i=0;i<len;i++)
        {
            index=input1[i];
            arr[index]++;
        }
    for(i=0;i<len;i++)
    {
        index=input2[i];
        arr[index]--;
    }
    
    for(i=0;i<256;i++)
    {
    if(arr[i]!=0)
    {
        return false;
    }
    }
    return true;
    
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}

