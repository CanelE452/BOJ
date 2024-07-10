#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> v;
map<int,int> m;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;cin>>n;
    for(int i=0;i<n;i++){
        int pos; cin>>pos;
        v.push_back(pos);
        m.insert({pos,0});
    }

    int order=0;
    for(auto &at: m) at.second=order++;
    for(int ans:v) cout<<m.at(ans)<<" ";

}
