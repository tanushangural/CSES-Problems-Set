#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> ans;

void fun(int n,int A,int B,int C){
    if(n==1){
        ans.push_back({A,C});
        return;
    }
    fun(n-1,A,C,B);
    ans.push_back({A,C});
    fun(n-1,B,A,C);
}

int main(){
    int n;
    cin>>n;
    fun(n,1,2,3);
    cout<<ans.size()<<endl;
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
    }
}