#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n;cin>>n;
    int p=1;
    int ans=0;
    for(int i=1;i<=n;i++){
        int no;cin>>no;
        if(no>=p)p=no;
        else ans+=p-no;
    }
    cout<<ans<<endl;
}