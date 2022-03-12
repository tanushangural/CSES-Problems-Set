#include<bits/stdc++.h>
using namespace std;

int ans=0;
int N = 9;
bool isNotValid(int i,int j,vector<vector<bool>>& visited){
    if(visited[i-1][j] && visited[i+1][j] && !visited[i][j-1] && !visited[i][j+1])return true;
    if(!visited[i-1][j] && !visited[i+1][j] && visited[i][j-1] && visited[i][j+1])return true;
}

void fun(int i,int j,int cnt,string& s,vector<vector<bool>>& visited){
    if(isNotValid(i,j,visited))return;

    if(i==7 && j==1){
        if(cnt==48)ans+=1;
        return;
    }
    if(cnt==48)return;
    visited[i][j]=true;
    if(s[cnt]=='R'){
        if(!visited[i][j+1])fun(i,j+1,cnt+1,s,visited);
    }
    else if(s[cnt]=='L'){
        if(!visited[i][j-1])fun(i,j-1,cnt+1,s,visited);
    }
    else if(s[cnt]=='U'){
        if(!visited[i-1][j])fun(i-1,j,cnt+1,s,visited);
    }
    else if(s[cnt]=='D'){
        if(!visited[i+1][j])fun(i+1,j,cnt+1,s,visited);
    }
    else{
        if(!visited[i][j+1])fun(i,j+1,cnt+1,s,visited);
        if(!visited[i][j-1])fun(i,j-1,cnt+1,s,visited);
        if(!visited[i-1][j])fun(i-1,j,cnt+1,s,visited);
        if(!visited[i+1][j])fun(i+1,j,cnt+1,s,visited);
    }
    visited[i][j]=false;
}

int main(){
    string s;
    cin>>s;
    vector<vector<bool>> visited(N,vector<bool>(N,false));
    for(int i=0;i<N;i++){
        visited[0][i]=true;
        visited[i][0]=true;
        visited[i][8]=true;
        visited[8][i]=true;
    }
    fun(1,1,0,s,visited);
    cout<<ans<<endl;
}