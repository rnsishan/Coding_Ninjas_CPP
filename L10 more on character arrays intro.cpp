//L10 more on character arrays


#include <iostream>

using namespace std;


int length(char input[]){
    
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    return count;
}


int main()

{
    char input[100]; //last character will be null. so sirf 3 char dalo
    cin.getline(input,100);
    cout<<input<<endl; //ye hello world pura print karega
    cin>>input;
    cout<<input; //ye sirf hello print karega
    //if it encounters space tab ya newline toh cin stop kar deta hai
    //input lena
    //so we use cin.getline(string_name,length,delimiter)
    //delimiter char type argument hai (default value newline \n)
    
    
    
    
    

    return 0;
}
