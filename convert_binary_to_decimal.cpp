#include<iostream>
using namespace std;
int main(){
    int bin_num;
    cout<< " enter the binary number";
    cin>> bin_num;
    int dec_num=0,i=0;
    while(bin_num){
       int  bit= bin_num & 1;
    dec_num=dec_num+ ( bit << i );
    i++;
    bin_num=bin_num >>1;

    }
    cout<< dec_num;
}
