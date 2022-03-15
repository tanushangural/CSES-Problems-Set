#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n;cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    vector<int> dp(n);
    dp[0]=ar[0];
    for(int i=1;i<n;i++){
        dp[i]=max(ar[i],ar[i]+dp[i-1]);
    }
    int ans=dp[0];
    for(int i=0;i<n;i++)ans = max(dp[i],ans);
    cout<<ans<<endl;
}