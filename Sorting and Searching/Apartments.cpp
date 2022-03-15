#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int> b(m);
    for(int i=0;i<m;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    int ans=0;
    while(i<n && j<m){
        int diff = abs(a[i]-b[j]);
        if(diff<=k){
            i+=1;
            j+=1;
            ans+=1;
        }
        else if(a[i]<b[j])i+=1;
        else j+=1;
    }
    cout<<ans<<endl;
}