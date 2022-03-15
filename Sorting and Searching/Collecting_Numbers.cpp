#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>> ar;
    for(int i=0;i<n;i++){
        int no;cin>>no;
        ar.push_back({no,i});
    }
    sort(ar.begin(),ar.end());
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(ar[i].second>ar[i+1].second)ans+=1;
    }
    cout<<ans<<endl;
}