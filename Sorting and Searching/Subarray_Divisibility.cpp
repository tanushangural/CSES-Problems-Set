#include<bits/stdc++.h>
using namespace std;
#define int long long int


int32_t main(){
    int n;cin>>n;
    int N = 1e13*n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    vector<int> pre(n+1,0);
    for(int i=1;i<=n;i++)pre[i]=pre[i-1]+ar[i-1];
    for(int i=1;i<=n;i++)pre[i]=(pre[i]+N)%n;
    unordered_map<int,int> mp;
    for(int i=0;i<=n;i++){
        mp[pre[i]]+=1;
    }
    int ans=0;
    for(auto it:mp){
        ans+=(it.second*(it.second-1))/2;
    }
    cout<<ans<<endl;
}