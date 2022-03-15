#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n,x;
    cin>>n>>x;
    vector<int> pre(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>pre[i];
        pre[i]+=pre[i-1];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int low=i,high=n-1;
        if(binary_search(pre.begin()+i,pre.end(),pre[i-1]+x))ans+=1;
    }
    cout<<ans<<endl;
}