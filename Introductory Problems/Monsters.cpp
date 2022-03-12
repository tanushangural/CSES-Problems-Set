#include<bits/stdc++.h>
#include<iostream>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define w(x)                int x;cin>>x;while(x-->0)
#define ll                  long long int
#define mod                 1000000007
#define arin(a)             for (auto &it : a) cin >> it;
#define dbg(ar,st,ed)       for(ll i=st;i<=ed;i++)cout<<ar[i]<<" ";cout<<endl;
#define endl               "\n"
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> PBDS;
 
ll dx[]={0,0,1,-1};
ll dy[]={1,-1,0,0};
char dir[]={'R','L','D','U'};
 
bool valid(ll r,ll c,ll& n,ll& m){
    return r>=0 && r<n && c>=0 && c<m;
}
bool isDestination(ll r,ll c,ll n,ll m){
    return r==0 || c==0 || r==n-1 || c==m-1;
}
 
void solve(){
    ll n,m;cin>>n>>m;
    vector<vector<char>> grid(n,vector<char>(m,'#'));
    vector<vector<ll>> dist(n,vector<ll>(m,INT_MAX));
    vector<vector<bool>> visited1(n,vector<bool>(m,false));
    queue<pair<ll,ll>> q;
    pair<ll,ll> st;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='M'){
                visited1[i][j]=true;
                q.push({i,j});
            }
            if(grid[i][j]=='A')st={i,j};
        }
    }
    ll lvl=0;
    while(!q.empty()){
        ll sz = q.size();
        for(ll i=0;i<sz;i++){
            auto cur=q.front();q.pop();
            dist[cur.first][cur.second]=min(lvl,dist[cur.first][cur.second]);
            for(ll i=0;i<4;i++){
                ll r = cur.first+dx[i];
                ll c = cur.second+dy[i];
                if(valid(r,c,n,m) && !visited1[r][c] && grid[r][c]!='#'){
                    visited1[r][c]=true;
                    q.push({r,c});
                }
            }
        }
        lvl+=1;
    }
    vector<vector<pair<ll,ll>>> path(n,vector<pair<ll,ll>>(m));
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    while(!q.empty())q.pop();
    q.push(st);
    visited[st.first][st.second]=true;
    path[st.first][st.second]={-1,-1};
    bool flag=false;
    pair<ll,ll> ed;
    lvl=0;
    while(!q.empty()){
        ll sz=q.size();
        for(ll i=0;i<sz;i++){
        auto node = q.front();q.pop();
        if(isDestination(node.first,node.second,n,m)){
            flag=true;ed.first=node.first;ed.second=node.second;
            break;
        }
        for(ll i=0;i<4;i++){
            ll cr = node.first+dx[i];
            ll cc = node.second+dy[i];
            if(valid(cr,cc,n,m) && !visited[cr][cc] && grid[cr][cc]!='#' && lvl+1<dist[cr][cc]){
                q.push({cr,cc});
                path[cr][cc]={node.first,node.second};
                visited[cr][cc]=true;
            }
        }   
        }
        lvl+=1;     
    }
    if(!flag){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    string ans;
    ll i=ed.first,j=ed.second;
    while(true){
        ll pi = path[i][j].first;
        ll pj = path[i][j].second;
        if(pi == -1 && pj==-1)break;
        if(pi<i)ans.push_back('D');
        else if(pi>i)ans.push_back('U');
        else if(pj<j)ans.push_back('R');
        else if(pj>j)ans.push_back('L');
        i=pi;j=pj;
    }
    cout<<ans.size()<<endl;
    reverse(ans.begin(),ans.end());
    if(!ans.empty())cout<<ans<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    //w(t)solve();
    solve();
}