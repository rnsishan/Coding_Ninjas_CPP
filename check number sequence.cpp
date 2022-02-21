/*check number sequence
You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing while the second is strictly increasing one.
*/
#include <iostream>
using namespace std;


int main(){
    int n; cin >> n; //n -> number of integers in the sequence;
    
    int number1; cin >> number1; //number1 -> first Number of sequence;
    int number2; cin >> number2; //number2 -> second number of sequence;
    
    
    bool isDec = false; // isDec -> a variable to store information 
    					//			that if series is starting increasing or decreasing
    bool isInc = false;
    if(number1 > number2){
        isDec = true;   // if first number is greater than 2nd number then we know that series 
        				// have started in decreasing order;
    }else{
        isInc = true;
    }
    
    int i = 1;
    while(i <= n - 2){	//here we are doing n - 2; as we have already take input of 1st 2 number out of n numbers
		int number3;
        cin >> number3;
        
        if(number3 > number2){
            isDec = false;	//if 3rd numebr is greater than 2nd number thne we know that increasing series have started 
            				//so we mark isDec as false;
            isInc = true;
        }
        else if(number3 < number2 and isInc == true){
            cout << "false";		// here isInc == true means that we were follwing a increasing sequence 
            						// and if a decreasing sequence comes after increasing we print false
            return 0;//exit the program;
        }
        number2 = number3;//for using current number as previous number in next iteration 
        i++;
        
        
    }
    cout << "true";
    return 0;
}
// #include<iostream>
// using namespace std;
                            //this wont work cos you limited a[100] whereas constraint is 10^7. gotta do it w/o array
// int main() {
// 	// Write your code here
// 	 int flag=0;
//     int n;
//     int i=0;
//     cin>>n;
//     int a[100];
//     int count=0;
//     for(i=0;i<n;i++){
//     cin>>a[i];   
//     count++;
//     }
//     i=0;
//     while(i<count){
//         if(a[i+1]<a[i]){
//             flag=0;
//             i++;
//             continue;
//         }
//         else{
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1){
//         while(i<count){
//             if(a[i+1]>a[i]){
//                 flag=0;
//                 i++;
//                 continue;
//             }
//             else{
//                 flag=1;
//                 break;
//             }
//         }
//     }
//     if(flag==0){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
    
    
// }


