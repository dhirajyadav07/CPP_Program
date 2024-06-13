/*

print

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 

*/




#include<iostream>
int main(){
    using namespace std;
    cout<<"Enter the number of row: "<< endl;
    int n;
    cin>> n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row+1) // print first triangle
        {
            cout<<col<<" ";
            col++;
        }
    
        int star=(row*2)-2;
        while(star)// for print *
        {
            cout<<"* ";
            star--;
        }
        int start=n-row+1;
    while(start)  // print second triangle
    {
        cout<<start<<" ";
        start--;
    }
        cout<< endl;
        row++;
    }

}