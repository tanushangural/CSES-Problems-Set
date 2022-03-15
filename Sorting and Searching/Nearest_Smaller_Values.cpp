#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    stack<int> stk;
    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        while(!stk.empty() && ar[stk.top()]>ar[i]){
            ans[stk.top()]=i+1;
            stk.pop();
        }
        stk.push(i);
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";cout<<endl;
}