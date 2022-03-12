#include<bits/stdc++.h>
using namespace std;

void fun(int idx,string& s,set<string>& set){
    if(idx==s.length()){
        set.insert(s);
        return;
    }
    for(int i=idx;i<s.length();i++){
        swap(s[idx],s[i]);
        fun(idx+1,s,set);
        swap(s[idx],s[i]);
    }
}

int main(){
    string s;cin>>s;
    set<string> set;
    fun(0,s,set);
    cout<<set.size()<<endl;
    for(auto it:set)cout<<it<<endl;
}