#include<bits/stdc++.h>
using namespace std;
#define int long long int

int fun(int i,int sum1,int sum2,vector<int>& ar){
    if(i<0) return abs(sum1-sum2);
    int x = fun(i-1,sum1+ar[i],sum2,ar);
    int y = fun(i-1,sum1,sum2+ar[i],ar);
    return min(x,y);
}

int32_t main(){
    int n;cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    cout<<fun(n-1,0,0,ar)<<endl;
}