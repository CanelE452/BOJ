#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

int v,e; 
int parent[10001];
long long ans;
bool flag;

vector<tuple<int,int,int>>graph;
int find_parent(int x){
    if(parent[x]==x) return x;
    else return parent[x]=find_parent(parent[x]);
}

void union_node(int a,int b){
    flag=false;

    a=find_parent(a);
    b=find_parent(b);

    if(a==b) return;
    else{
        parent[a]=b;
        flag=true;
    }
}

int main(){
    cin>>v>>e;

    for(int i=1;i<=v;i++) parent[i]=i;

    for(int i=0;i<e;i++){
        int a,b,c; cin>>a>>b>>c;
        graph.push_back({c,a,b});
    }
    sort(graph.begin(),graph.end());
    for(int i=0;i<e;i++){
        union_node(get<1>(graph[i]),get<2>(graph[i]));
        if(flag) ans+=get<0>(graph[i]);
    }
    cout<<ans;
}
