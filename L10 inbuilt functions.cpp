//L10 inbuilt functions
/*
1. length of string strlen(string_name);
2. compare two strings strcmp(str1,str2);   returns integer value
3. copy string strcpy(dest_string1,source_string2);
pura replace kar deta hai strcpy dest me.
4. copy first n characters  of a string: 
strncpy(dest_string,source_string,n);
strncpy null append nahi karta, strcpy karta hai

QUES. to print all prefixes of a user given string input
        :created a fxn for it below
*/
//must put the header file
#include<cstring>
#include <iostream>

using namespace std;

void print_all_prefixes(char input1[]){
//i represnts end index of prefix, j represnts start index of prefix
    for(int i=0;input1[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<input1[j];
        }
        cout<<endl;
    }
}


int main()
{
    char input1[100],input2[100];
    cin.getline(input1,100);
    cin.getline(input2,100);
    
    print_all_prefixes(input1);
    cout<<endl;
    if (strcmp(input1,input2)==0){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    int len=strlen(input1);
    /*
    int len1=strlen(input2);
    cout<<len<<" "<<len1<<endl;
    
    strcpy(input1,input2);
    cout<<input1<<input2<<endl; */
    
    strncpy(input1,input2,3); /*strncpy wont add null on its own
    except when dest me kam chars dalne ho,fir aage walo me null
    daal dega*/
    cout<<input1<<endl;
    
    
    
    

    return 0;
}


