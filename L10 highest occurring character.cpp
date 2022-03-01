/*
highest occuring character
For a given a string(str), find and return the highest occurring character.


*/
#include <iostream>
#include <cstring>
using namespace std;
char highestOccurringChar(char input[]) {
    // Write your code here
    int freq[256] = {0};
    int l = -2147483647, lpos = -1;
    int sav;
    for(int i=0; input[i]!='\0'; i++){
        sav = (int)input[i];
        freq[sav] += 1;
    }
    
    for(int i=0; i<256; i++){
        if(freq[i] > l){
            l = freq[i];
            lpos = i;
        }
        else if(freq[i] == l){
            continue;
        }
    }

    return (char)lpos;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
