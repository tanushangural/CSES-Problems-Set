#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar.begin(),ar.end());
    long long sum=1;
    for(int i=0;i<n;i++){
        if(sum>=ar[i])sum+=ar[i];
        else break;
    }
    cout<<sum<<endl;
}