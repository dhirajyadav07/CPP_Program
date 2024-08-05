#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }

    int sum=0,temp_sum=0,idx=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];

    }
    for(int i=0;i<n;i++){
        temp_sum +=arr[i];
        if(temp_sum==sum/2){
            idx=i;
            break;
        }
    }
    if(idx==-1) return -1;

    for(int i=0;i<=idx;i++){
        cout <<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=idx+1;i<n;i++){
        cout<<arr[i]<<" ";
    }
}