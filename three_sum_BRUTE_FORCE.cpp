/*
Approach 1 :-> Brute Force approach
time complexity = O(n^3)

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n ;
    cin >>n;
    int target;
    cin>>target;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >>v[i];
    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]+v[j]+v[k]==target){
                    cout<<v[i]<<" "<<v[j]<<" "<<v[k];
                    return 0;
                }
            }
        }
    }
    return -1;

}
