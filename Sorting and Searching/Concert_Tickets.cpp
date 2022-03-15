#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    multiset<int> ms;
    for(int i=0;i<n;i++){
        int no;cin>>no;
        ms.insert(no);
    }
    while(m-->0){
        int x;cin>>x;
        auto it = ms.upper_bound(x);
        if(it==ms.begin()){
            cout<<"-1"<<endl;
        }
        else{
            cout<<*(--it)<<endl;
            ms.erase(it);
        }
    }
}