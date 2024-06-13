/*
print
      1 
    2 3 
  4 5 6 
7 8 9 10

*/



#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<< "Enter the number of row "<< endl;
    cin>>n;
    int row=1;
    int count=0;
    while(row<=n){
        int space=0;
        while(space<n-row)//for space
        {
            cout<<"  ";
            space++;
        }
        int col=1;
        
        while(col<=row)//for count value
        {
            count++;
            cout<<count<<" ";
            col++;
        }
        cout<< endl;
        row++;
    }
}