#include <iostream>
#include<vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> v;
bool alph[26];

int N,K,MaxN; 

void dfs(int idx,int remain){
    if(!remain){
        int cnt=0; 
        for(string word:v){
            bool flag=true;
            for(char ch:word){
                if(!alph[ch-'a']){
                    flag=false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        MaxN=max(MaxN,cnt);
        if(MaxN==N){
            cout<<N;
            exit(0);
        }
        return;
    }
    for(int i=idx;i<26;i++){
        if(alph[i]) continue;
        alph[i]=true;
        dfs(i,remain-1);
        alph[i]=false;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>N>>K;
    while(N--){
        string word; cin>>word;
        v.push_back(word.substr(4,word.size()-8));
    }
    if(K<5){
        cout<<0;
        return 0;
    }
    alph['a'-'a']=true;
    alph['c'-'a']=true;
    alph['i'-'a']=true;
    alph['t'-'a']=true;
    alph['n'-'a']=true;
    dfs(0,K-5);
    cout<<MaxN;
}     

