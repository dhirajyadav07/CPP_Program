#include<iostream>
using namespace std;
void swap(int a , int b){
    int c;
    c=b;
    b=a;
    a=c;
}
int main(){
int x,y;
cin>>x>>y;

swap(x,y);
cout<<x<<" "<<y;

}