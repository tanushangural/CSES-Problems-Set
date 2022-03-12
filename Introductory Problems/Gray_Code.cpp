#include<bits/stdc++.h>
using namespace std;

vector<string> fun(int i){
    if(i==1){
        vector<string> v;
        v.push_back("0");
        v.push_back("1");
        return v;
    }
    vector<string> ans;
    vector<string> v = fun(i-1);
    for(int j=0;j<v.size();j++){
        ans.push_back("0"+v[j]);
    }
    for(int j=v.size()-1;j>=0;j--){
        ans.push_back("1"+v[j]);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<string> ans = fun(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}