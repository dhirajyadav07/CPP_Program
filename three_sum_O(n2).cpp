/*
Approach :-> 3  
-> using Two Sum 
-> Timecomplexity O(n2)

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
sort(v.begin(),v.end());
for(int i=0;i<n-2;i++){
    // every time we fixd the one number and find remaining two number using two sum
    int start=i+1,end=n-1,find_sum=target-v[i];
    // now i use Two Sum 
    while(start<end){
        int temp_sum=v[start]+v[end];
        if(temp_sum==find_sum){
            cout<<v[i]<<" "<<v[start]<<" "<<v[end];
            return 0;
        }
        else if(temp_sum>find_sum){
               end--;

        }
        else {
            start++;
        }
    }
}

return -1;

}
