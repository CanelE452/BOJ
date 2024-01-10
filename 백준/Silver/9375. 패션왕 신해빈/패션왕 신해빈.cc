#include <iostream>
#include <string>
#include <map>

using namespace std;

int T,n;
int ans=1;
string name,catag;

map<string,int> m;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>T;
    while(T--){
        ans=1;
        m.clear();
        cin>>n;
        cin.ignore();
        while(n--){
            cin>>name>>catag;
            if(m.find(catag)==m.end()) m.insert({catag,1});
            else m[catag]++;
        }
        for(auto i : m) ans*=(i.second+1);
        ans-=1;

        cout<<ans<<"\n";       
    }

}
