#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number: ";
     int ans=0;  //used to store the complement
        int i=0; 
        int n;
        cin>> n;
        if(n==0){
            cout<<1;
            exit(0);
        }
        while(n){
            int bit=n&1;
            int rev_bit=bit^1;   // we use xor for reversing the bit 
            ans +=rev_bit <<i;
            n=n>>1;
            i++;
        }
        cout<< ans;
    
    }
