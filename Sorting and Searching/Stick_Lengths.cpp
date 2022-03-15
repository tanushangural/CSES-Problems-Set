#include<bits/stdc++.h>
using namespace std;

int getMedian(vector<int>& ar,int& n){
    if(n&1) return ar[n/2];
    else return (ar[n/2]+ar[(n-1)/2])/2;
}

int main(){
    int n;cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar.begin(),ar.end());
    int median = getMedian(ar,n);
    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=abs(median-ar[i]);
    }
    cout<<ans<<endl;
}