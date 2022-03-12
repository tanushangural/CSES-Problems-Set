#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> pos(n+1,0);
    for(int i=0;i<n;i++){
        int no;cin>>no;
        pos[no]=1;
    }
    for(int i=1;i<=n;i++){
        if(pos[i]==0)cout<<i<<endl;
    }
}