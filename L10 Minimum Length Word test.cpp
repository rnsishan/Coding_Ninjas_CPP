/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/

/*
Minimum Length Word
Given a string S (that can contain multiple words), you need to find the word which has minimum length.
*/
#include<iostream>
using namespace std;

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






int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
