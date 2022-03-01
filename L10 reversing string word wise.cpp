/* 
reversing string word wise

*/

#include <iostream>
using namespace std;


void reverse(char arr[], int si, int ei) {
    while(si <= ei) {
        std::swap(arr[si++], arr[ei--]);
    }
}

void reverseStringWordWise(char input[]) {
    // Write your code here
     int i=0;
    int temp=0;
    int len=0;
    while(input[i]!='\0'){
        len++;
        i++;
    }	//counting
    
    reverse(input, 0, len-1);
    int prev = 0;
    for(int i = 0; i < len; i++) {
        if(input[i] == ' ') {
            reverse(input,prev,i-1);
            prev = i+1;
        }
    }
    reverse(input,prev, len-1);
    
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}

