/*
print
1
22
333
4444
55555


*/



#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter the number of row :";
    cin>> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< i;

        }
        cout<< endl;
    }
    
}