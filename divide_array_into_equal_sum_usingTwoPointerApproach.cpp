//  using two pointer approach
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }

    int i=0,j=n-1,start_sum=arr[0],end_sum=arr[n-1];
    int idx=-1;
    while(i<j){
        if(j==i+1 && start_sum == end_sum) 
        {
            idx=i;
            break;
        }
        else{
             if(start_sum<=end_sum){
                i++;
                start_sum +=arr[i];
             }
             else{
                j--;
                end_sum +=arr[j];
             }
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