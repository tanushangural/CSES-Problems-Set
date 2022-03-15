#include<bits/stdc++.h>
using namespace std;

void binarySearchApproch(vector<pair<int,int>>& ar,int& n,int& x){
    for(int i=0;i<n;i++){
        int tar = x-ar[i].first;
        int low=i+1,high=n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(ar[mid].first==tar){
                cout<<ar[i].second<<" "<<ar[mid].second<<endl;
                return;
            }
            else if(ar[mid].first<tar)low=mid+1;
            else high=mid-1;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}

void twoPointersApproch(vector<pair<int,int>>& ar,int& n,int& x){
    int i=0,j=n-1;
    while(i<j){
        int sum=ar[i].first+ar[j].first;
        if(sum==x){
            cout<<ar[i].second<<" "<<ar[j].second<<endl;
            return;
        }
        else if(sum<x){
            i+=1;
        }
        else j-=1;
    }
    cout<<"IMPOSSIBLE"<<endl;

}



int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> ar;
    for(int i=1;i<=n;i++){
        int no;cin>>no;
        ar.push_back({no,i});
    }
    sort(ar.begin(),ar.end());
    twoPointersApproch(ar,n,x);
}