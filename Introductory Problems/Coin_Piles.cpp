#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int a = min(x,y);
    int b = max(x,y);
    if((a+b)%3==0 && (a>=(b/2)))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    int t;cin>>t;
    while(t-->0){
        solve();
    }
}