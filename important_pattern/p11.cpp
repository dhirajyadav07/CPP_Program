/*

print
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 

*/



#include<iostream>
int main(){
    using namespace std;
    int n ;
    cout<<" enter the number of row: "<< endl;
    cin>> n;
    int row=1;
    while(row<=n){
        int space=0;
        while(space<n-row)//for print space
        {
            cout<<"  ";
            space++;
        }
        int col=1;
        while(col<=row)
        {
            cout<<col<<" ";
            col++;
        }
        int start=row-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<< endl;


        row++;
    }

}
