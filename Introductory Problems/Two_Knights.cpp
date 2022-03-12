#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(int n){

    // Consider no knights attacking each other
    int totalWays= (n*n*(n*n-1))/2;

    //There are two pairs attacking each other in every 2x3 and 3x2 matrices
    
    int attacks = 4 * (n-1) * (n-2);
    cout<<totalWays-attacks<<endl;
}

int32_t main(){
    int q;cin>>q;
    for(int i=1;i<=q;i++)solve(i);
}