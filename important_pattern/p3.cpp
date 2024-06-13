/*
print
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15


*/



#include<iostream>
int main(){
    using namespace std;
    int n , count=0;
    cout<< " enter the number of row";
    cin>> n;
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
         count++;
         cout<< count<<" ";
        }
        cout<< endl;
    }
}