/* Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.*/
#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
    int m,n;
    cin>>m>>n;
  //taking input
    int a[m][n];

  for(int i=0;i<m;i++){   //rows
        for(int j=0;j<n;j++){   //filling columns
            cin>>a[i][j];
    }
    }
  //sum
int sum[n]={0};
	for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i]=sum[i]+a[j][i];
        }
 
    }
    //printing
    for(int i=0;i<n;i++)
    cout<<sum[i]<<" ";
}

