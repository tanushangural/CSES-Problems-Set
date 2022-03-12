#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    int n = s.length();
    vector<int> fre(26,0);
    for(int i=0;i<n;i++)fre[s[i]-'A']+=1;
    string ans;
    int oddCnt=0;
    for(int i=0;i<26;i++){
        if(fre[i]%2!=0)oddCnt+=1;
    }
    if(oddCnt>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    for(int i=0;i<26;i++){
        if(fre[i]==0)continue;
        if(fre[i]%2==0){
            int j=fre[i]/2;
            while(j>0){
                ans.push_back('A'+i);
                j-=1;
            }
        }
    }
    for(int i=0;i<26;i++){
        if(fre[i]%2!=0){
            int j=fre[i];
            while(j>0){
                ans.push_back('A'+i);
                j-=1;
            }
        }
    }
    for(int i=25;i>=0;i--){
        if(fre[i]==0)continue;
        if(fre[i]%2==0){
            int j=fre[i]/2;
            while(j>0){
                ans.push_back('A'+i);
                j-=1;
            }
        }
    }
    cout<<ans<<endl;

}