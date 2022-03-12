#include<bits/stdc++.h>
using namespace std;

const int N = 8;

bool isValid(int&row,int& col,vector<vector<char>>& grid,int colm[],int diag1[],int diag2[]){
    if(colm[col] || diag1[row-col+N] || diag2[row+col] || grid[row][col]=='*')return false;
    return true;
}

int fun(int row,vector<vector<char>>grid,int colm[],int diag1[],int diag2[]){
    if(row>=8)return 1;
    int ans=0;
    for(int col=0;col<N;col++){
        if(isValid(row,col,grid,colm,diag1,diag2)){
            colm[col]=1;
            diag1[row-col+N]=1;
            diag2[row+col]=1;
            ans+=fun(row+1,grid,colm,diag1,diag2);
            colm[col]=0;
            diag1[row-col+N]=0;
            diag2[row+col]=0;
        }
    }
    return ans;
}

int main(){
    vector<vector<char>> grid(N,vector<char>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>grid[i][j];
        }
    }
    int colm[N]={0},diag1[3*N]={0},diag2[3*N]={0};
    int ans = fun(0,grid,colm,diag1,diag2);
    cout<<ans<<endl;
}