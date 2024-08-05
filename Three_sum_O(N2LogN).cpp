/*
approach:-> 2 , 
-> sort the data 
-> taking two number first and add then 
-> then subtract from the target and store in find variable 
-> and find this find variable element using binary search  from remaing data 


hence , Timecomplexity =O(N2LogN)
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
        for(int j=i+1;j<n-1;j++){
            int find=target-(v[i]+v[j]);
            // use binary search because our data is all ready sort
                int start=j+1,end=n-1;
                while(start<end){
                 int mid=start-(start-end)/2;
                 if(v[mid]==find){
                    cout<<v[i]<<" "<<v[j]<<" "<<v[mid];
                    return 0;
                 }
                 else if(v[mid]>find)
                        end=mid-1;
                    else
                      start=mid+1;
                }
        }
    }
    return -1;
}