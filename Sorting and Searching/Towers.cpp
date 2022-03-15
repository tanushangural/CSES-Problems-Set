#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    multiset<int> ms;
    for(int i=0;i<n;i++){
        auto lb = ms.upper_bound(ar[i]);
        if(lb!=ms.end()) ms.erase(ms.find(*lb));
        ms.insert(ar[i]);
    }
    cout<<ms.size()<<endl;
}