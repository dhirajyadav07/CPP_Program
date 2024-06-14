#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    
    // cout << "Enter the number: ";
    int n;
    cin>> n;

    int ans = 0;
    int i = 0;
    while (n!=0)
    {
        int bit = n & 1;
        ans += bit *(1<<i);
        n = n >> 1;
        i=i+1;
    }
    cout<< ans;
}