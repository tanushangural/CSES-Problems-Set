#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool isPossible(vector<int>& ar,int& n,int& k,int& mid){
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=mid/ar[i];
        if(cnt>=k)return true;
    }
    return false;
}

int32_t main(){
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    int low=1,high=1e18;
    int ans=high;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(isPossible(ar,n,k,mid)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans<<endl;
}