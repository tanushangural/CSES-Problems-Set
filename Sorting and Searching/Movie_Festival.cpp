#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>> ar;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        ar.push_back({x,y});
    }
    sort(ar.begin(),ar.end(),[](auto& x,auto& y){
        if(x.second==y.second)return x.first<y.first;
        else return x.second<y.second;
    });
    int ed=ar[0].second;
    int ans=1;
    for(int i=1;i<n;i++){
        if(ar[i].first>=ed){
            ans+=1;
            ed=ar[i].second;
        }
    }
    cout<<ans<<endl;
}