#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    queue<int> q;
    for(int i=1;i<=n;i++)q.push(i);
    bool flag=true;
    while(!q.empty()){
        int x = q.front();q.pop();
        if(flag){
            q.push(x);
        }
        else{
            cout<<x<<" ";
        }
        flag=!flag;
    }
}