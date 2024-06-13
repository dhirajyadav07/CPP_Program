/*  print:

****
*** 
**  
*

*/

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<< "Enter the number of row";
    cin>> n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row+1)//print star
        {
            cout<<"*";
            col++;
        }
        int space=0;
        while(space<row-1)// print space
        {
            cout<<" ";
            space++;
        }



        cout<< endl;
        row++;
    }
}