#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n;
    cin>>n;
    while(true){
        cout<<n<<" ";
        if(n==1)break;
        if(n&1)n=n*3+1;
        else n=n>>1;
    }
}