/*
print

ABCD
ABCD
ABCD
ABCD

*/


#include<iostream>
int main(){
    using namespace std;
   int n;
   cout<< " Enter the number of rows";
   cin>> n;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        char ch='A'+j-1;
        cout<< ch;
    }
    cout<< endl;
   }
    
}