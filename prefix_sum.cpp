#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cin >>n;
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
int sum=0,arr_prefix[n];
for(int i=0;i<n;i++){
    sum+=arr[i];
    arr_prefix[i]=sum;

}
for(int i=0;i<n;i++){
    cout <<arr_prefix[i]<<" ";
}

}