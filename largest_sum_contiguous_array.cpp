#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    int maxi=INT_MIN;
   int temp_sum=0;
    for(int i=0;i<n;i++){
      temp_sum +=arr[i];

if(temp_sum < 0)
  temp_sum=0;

  if(temp_sum>=maxi)
   maxi=temp_sum;
    }
cout <<maxi;

}
