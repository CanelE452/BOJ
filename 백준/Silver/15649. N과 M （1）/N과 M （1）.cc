#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N,M; 
 map<int,int> m;
 vector<int> v;

void fun(int pos){
    if(pos==M){
        for(int ans:v) cout<<ans<<" ";
        cout<<"\n";
        return;
    }
    for(int i=1;i<=N;i++){
        if(m[i]==0){
            v.push_back(i);
            m[i]=1;
            fun(pos+1);
            v.pop_back();
            m[i]=0;
        }
    }

}

int main(){
    cin>>N>>M;
    for(int i=1;i<=N;i++) m.insert({i,0});
    fun(0);

}
