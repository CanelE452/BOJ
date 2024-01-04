#include <iostream>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

map<string,int> m;
int N,M;


bool cmp(pair<string,int> a,pair<string,int> b){
    if(a.second==b.second){
        if(a.first.size()==b.first.size()) return a.first<b.first;
        else return a.first.size()>b.first.size();
    }
    return a.second>b.second;
}

int main(){
    cin>>N>>M;
    while(N--){
        string str; cin>>str;
        if(str.size()<M) continue;
        m[str]++;
    }

    vector <pair<string,int>> v;
    for(auto w: m) v.push_back({w.first,w.second});
    sort(v.begin(),v.end(),cmp);
    for(auto p:v) cout<<p.first<<"\n";
}
