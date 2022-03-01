/*
Print 2D Array
Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.
*/
#include <iostream>
using namespace std;
/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/
#include<cstring>
void minLengthWord(char input[], char output[]){
  
    int len=strlen(input);
    int si=0,ei=0;
    int min_length =len, min_start_index = 0;
    while (ei <= len)
    {
        if (ei < len && input[ei] != ' ')
            ei++;
        else
        {
            int curr_length = ei - si;
         
            if (curr_length < min_length) 
            {
                min_length = curr_length;
                min_start_index = si;
            } 
	      ei++;
          si=ei;
        }
    }
 for(int i=0;i<min_length;i++)
 {
   output[i]=input[min_start_index++];
  
 }
}


int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
}

