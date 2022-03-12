#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n;cin>>n;
    int s1=0,s2=0;
    vector<int> v1,v2;
    for(int i=n;i>=1;i--){
        if(s1<=s2){
            s1+=i;
            v1.push_back(i);
        }
        else{
            s2+=i;
            v2.push_back(i);
        }
    }
    if(s1==s2){
        cout<<"YES"<<endl;
        cout<<v1.size()<<endl;
        for(auto it:v1)cout<<it<<" ";cout<<endl;
        cout<<v2.size()<<endl;
        for(auto it:v2)cout<<it<<" ";cout<<endl;
    }
    else cout<<"NO"<<endl;
}