//we check last bit if one then increase the count and perform right shift
//iterate untill number become zero
#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<" enter the value of number :"<< endl;
    cin>> n;
    int count=0;
    while(n){
        if(n&1){
            count++;
        }
        n=n>>1;

    }
    cout<<count;
}