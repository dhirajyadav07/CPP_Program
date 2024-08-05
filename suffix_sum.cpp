#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >>arr[i];

    }
    int sum=0, arr_suffix[n];
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
        arr_suffix[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout <<arr_suffix[i]<<" ";
    }
}