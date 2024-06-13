/*
print
1
21
321
4321

*/


#include<iostream>
int main()
{
    using namespace std;

     int n;
     cout<< "Enter the number of row:";
     cin>> n;
     int row=1;
     while(row<=n){
        int col=1;
        int value=row;
        while(col<=row){
            cout<< value;
            col++;
            value--;
        }
        cout<< endl;
        row++;
     }

}