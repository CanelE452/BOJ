#include <iostream>
#include <vector>
#include <queue>

#define MAX 32001
using namespace std;

int n,m;
int inDegree[MAX],result[MAX];
vector<int> graph[MAX];

void topology_sort(){
    queue<int> q;
    for(int i=1;i<=n;i++)
        if(inDegree[i]==0) q.push(i);
    
    for(int i=0;i<n;i++){
        if(q.empty()) return;
        int cur=q.front();
        result[i]=cur;
        q.pop();
        for(int j=0;j<graph[cur].size();j++){
            int next=graph[cur][j];
            if(--inDegree[next]==0) q.push(next);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    while(m--){
        int a,b; cin>>a>>b;
        graph[a].push_back(b);
        inDegree[b]++;
    }
    topology_sort();
    for(int i=0;i<n;i++) cout<<result[i]<<" ";
}