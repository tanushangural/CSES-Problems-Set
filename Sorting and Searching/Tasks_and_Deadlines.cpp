#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n;cin>>n;
    vector<pair<int,int>> ar;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        ar.push_back({a,b});
    }
    sort(ar.begin(),ar.end());
    int ans=0;
    int d=0;
    for(int i=0;i<n;i++){
        d+=ar[i].first;
        ans+=ar[i].second-d;
    }
    cout<<ans<<endl;
}