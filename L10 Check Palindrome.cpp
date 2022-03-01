/*

Check Palindrome

Given a string, determine if it is a palindrome, considering only alphanumeric characters.
*/
#include <iostream>

using namespace std;

bool checkPalindrome(char str[]) {
    // Write your code here
    
    int n,r,sum=0;
    char temp;    
 for(int i=0;str[i]!='\0';i++){
     n++;
 }
  int i=0,j=n-1;
 while(i<j){
    for(i,j;i<n;i++,j--){
     if(str[i]!=str[j]){
         return false;
     }
 }} 
        return true;
}


#include <iostream>
#include <cstring>
using namespace std;



int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
