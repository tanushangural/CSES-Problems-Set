#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n;cin>>n;
    int i=5;
    int ans=0;
    while(i<=n){
        ans+=n/i;
        i*=5;
    }
    cout<<ans<<endl;
}