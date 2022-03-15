#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> ar;
    for(int i=0;i<n;i++){
        int no;cin>>no;
        ar.push_back({no,i+1});
    }
    sort(ar.begin(),ar.end());
    for(int i=0;i<n;i++){
        int tar = x-ar[i].first;
        int l=i+1,r=n-1;
        while(l<r){
            int sum = ar[l].first+ar[r].first;
            if(sum==tar){
                cout<<ar[i].second<<" "<<ar[l].second<<" "<<ar[r].second<<endl;
                return 0;
            }
            else if(sum<tar)l+=1;
            else r-=1;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

}