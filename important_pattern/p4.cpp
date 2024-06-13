/*
print

1
23
345
4567

*/


#include<iostream>

int main(){
    using namespace std ;
    int n ;
    cout<< "Enter the number of row:";
    cin>> n;
    for(int row=1;row<=n;row++){
        for(int col=0;col<row;col++){
            cout<< row+col;

        }
        cout<< endl;
    }
}