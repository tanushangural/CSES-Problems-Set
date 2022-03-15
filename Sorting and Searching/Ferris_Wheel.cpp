#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar.begin(),ar.end());
    int i=0,j=n-1;
    int ans=0;
    while(i<=j){
        if(i==j){
            ans+=1;
            break;
        }
        int sum = ar[i]+ar[j];
        if(sum>k)j-=1;
        else{
            i+=1;j-=1;
        }
        ans+=1;
    }
    cout<<ans<<endl;
}