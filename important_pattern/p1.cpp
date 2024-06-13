/*
print

*
**
***
****
*****
******
*******


*/



#include<iostream>

int main(){
    using namespace std;
    cout<< " Enter the number of rows";
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<< "*";
            
        }
        cout<< endl;
    }
    
}