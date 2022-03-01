/*
Reverse Each Word
Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
*/

#include <iostream>
#include <cstring>
using namespace std;
void reverse(char input[], int i, int j){
    for(; i<=j; i++,j--){
        swap(input[i], input[j]);
    }
}
void reverseEachWord(char input[]) {
    // Write your code here
    for(int i=0,j=0; i<=strlen(input); i++){
        if(input[i] == ' ' || input[i] == '\0'){
            reverse(input, j, i-1);
            j = i + 1;
        }
    }

}
int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
