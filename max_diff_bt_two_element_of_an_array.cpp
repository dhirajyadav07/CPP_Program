#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
       
        cin>> v[i];
    

}
int mini=INT_MAX;
int idx=-1;

for(int i=0;i<n;i++){
  if(v[i]<mini){
    idx=i;
    mini=v[i];
    
  }
 
}
if(idx==n-1) return cout << v.end();
int maxi=INT_MIN;
for(int i=idx+1;i<n;i++){
int diff=abs(v[idx]-v[i]);

maxi=max(maxi,diff);
}


cout << maxi;

}
