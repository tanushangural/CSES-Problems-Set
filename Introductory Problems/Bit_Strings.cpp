#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1e9+7;
int fun(int n){
    if(n==0)return 1;
    int curAns = fun(n/2);
    curAns=curAns*curAns;
    curAns%=mod;
    if(n&1){
        curAns*=2;
        curAns%=mod;
    }
    return curAns;
}

int32_t main(){
    int n;cin>>n;
    int ans=1;
    int p=2;
    while(n>0){
        if(n&1){
            ans*=p;
            ans%=mod;
        }
        p=p*p;
        p%=mod;
        n/=2;
    }
    cout<<ans<<endl;
}