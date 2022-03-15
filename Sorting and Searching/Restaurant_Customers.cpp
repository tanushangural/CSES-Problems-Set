#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int                 long long int
#define w(x)                int x;cin>>x;while(x-->0)
#define inf                 1e18
#define mod                 1000000007
#define arin(a)             for (auto &it : a) cin >> it;
#define dbg(ar,st,ed)       for(int i=st;i<=ed;i++)cout<<ar[i]<<" ";cout<<endl;
#define endl               "\n"
#define setBits(x)          __builtin_popcount(x)
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
typedef tree<int,null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;

void solve1(){
    int n;cin>>n;
    vector<pair<int,int>> ar;
    for(int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        ar.push_back({s,e});
    }
    sort(ar.begin(),ar.end());
    ordered_multiset set;
    set.insert(ar[0].second);
    int ans=1;
    for(int i=1;i<n;i++){
        int curMax = set.size() - set.order_of_key(ar[i].first) + 1;
        ans = max(ans,curMax);
        set.insert(ar[i].second);
    }
    cout<<ans<<endl;
}


void solve2(){
    int n;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        mp[s]+=1;
        mp[e+1]-=1;
    }
    int N = 3*n;
    vector<int> pre(N,0);
    int idx=0;
    for(auto it:mp){
        pre[idx]=it.second;
        idx+=1;
    }
    int ans=1;
    for(int i=1;i<N;i++){
        pre[i]+=pre[i-1];
        ans = max(pre[i],ans);
    }
    cout<<ans<<endl;

}


int32_t main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    //w(t)solve();
    solve2();
}