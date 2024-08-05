#include<iostream>
using namespace std;
int binary_search(int first, int last, int arr[],int key){
    int mid=(first+last)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        first=mid+1;
        binary_search(first,last,arr,key);
    }
    else{
        last=mid-1;
        binary_search(first,last,arr,key);
    }
}
int main(){
    int n;
    cout << "enter the size of array";
cin>> n;
int arr[n];
for(int i=0;i<n;i++){
    cin >> arr[i];
}
cout<< "enter the key to find: ";
int key;
cin>> key;
int first=0, last=n-1;
cout<< binary_search(first,last,arr,key); 
}