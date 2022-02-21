#include <iostream>
using namespace std;
int main() {
int i = 1;
while (i <= 5) // Starting our first part of the pattern.
{
int j = i;
while (j < 5)
{
cout<<" ";
j++;
}
int k = 1;
while(k < 2*i) // upto k = 2n-1
{
cout << k;
k++;
}
i++;
cout << endl;
}
i = 4; // Starting our second pattern in reverse order.
while (i > 0)
{
int j = 5;
while (j > i)
{
cout << " ";
j--;
}
int k = 1;
while (k < 2*i)
{
cout << k;
k++;
}
cout << endl;
i--;
}
}
