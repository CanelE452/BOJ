#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<char,pair<char,char>> tree;
vector <char>pre,in,post;

int n;
void dfs(char alp,int val){
    pre.push_back(alp);
    if(tree[alp].first!='.') dfs(tree[alp].first,val+1);
    in.push_back(alp);
    if(tree[alp].second!='.') dfs(tree[alp].second,val+1);
    post.push_back(alp);

}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
        char alp,fir,sec; cin>>alp>>fir>>sec;
        tree[alp]={fir,sec};
    }
    dfs('A',0);
    for(char v:pre) cout<<v;
    cout<<"\n"; 
    for(char v:in) cout<<v; 
    cout<<"\n"; 
    for(char v:post) cout<<v; 
}     

