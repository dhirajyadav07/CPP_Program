#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int n=6;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int second_max=INT32_MIN,max=INT32_MIN;
	   for(int i=0;i<n;i++){
	       if(arr[i]>max){
	           second_max=max;
	           max=arr[i];
	       }
	       if(arr[i]>second_max && arr[i]<max){
	           second_max=arr[i];
	       }
	   }
	//    cout<< second_max;
    if(second_max==INT32_MIN){
        cout<<-1;
    }
       cout<< max;
}