/*
Compress the String
Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
*/

#include <iostream>
#include <cstring>
#include<string>
using namespace std;
string getCompressedString(string &input) {
    // Write your code here
int n=input.size();  // .size function is used in strings to calculate size
    int nextindex=1;  // to maintain at which index we have to store anything
    for(int i=0;i<n;i++){
        int count=1; 
        while(input[i]==input[i+1]){
            count++;   // counting occurnce
            i++;
        }
        if(count>1){  // if count is greater thn 1 thn only we have to place the count
      input[nextindex]=count+48;  // placing the count
            nextindex++;
            input[nextindex]=input[i+1];  // placing the next character at its position
            nextindex++;
        }
        else if(count==1){
            input[nextindex]=input[i+1];  // placing only the next character 
            nextindex++;
        }
        
    }
    
    input.erase(nextindex-1); // this function is used for deleting the string from the given index onwards.. as strings treat NULL as a character only so we have to delete the unwanted elements
    return input;  // returning
}

int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}
