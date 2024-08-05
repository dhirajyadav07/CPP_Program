#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    int n=7;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    
    for(int i=0;i<n;i++){
        int flag=0;
        int j=i+1;
        for(j;j<n;j++){
            if(arr[i]!=-1){
            if(arr[i]==arr[j]){
                 arr[i]=-1;
                arr[j]=-1;
            }
        }
        }
        if(arr[i]!=-1)
        {
            cout<<arr[i];
        }
       
        
     } 
   // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }

}