#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }


    for(int size=1;size<=n;size++){
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                cout <<arr[j];
            }
            cout<<" @ ";  
            
        }
    }
}