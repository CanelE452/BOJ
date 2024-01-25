// vector<int> dist(1001, INF);
// 벡터는 초기값을 정할수 있다
//배열을 fill_n으로 정의할수 있

#include <iostream>
#include <queue>

using namespace std;

#define INF 987654321 
#define MAX_N 1001

typedef pair<int,int>pii;

int graph[MAX_N][MAX_N];
int dist[MAX_N];
int city, bus;

void dijkstra(int start){
    priority_queue <pii,vector<pii>,greater<pii>> pq;
    bool visited[MAX_N]={false};
    for(int i=1;i<=city;i++) dist[i]=INF; dist[start]=0;
    pq.push({0,start});

    while(!pq.empty()){
        int cur=pq.top().second;
        pq.pop();

        if(visited[cur]) continue;  visited[cur]=true;

        for(int v=1;v<=city;v++){
            if(dist[v]>dist[cur]+graph[cur][v]){
                dist[v]=dist[cur]+graph[cur][v];
                pq.push({dist[v],v});
            }
        }
    }
}

int main(){
    cin>>city;
    cin>>bus;

    for(int i=1;i<=city;i++){
        for(int j=1;j<=city;j++){
            if(i==j) graph[i][j]=0;
            else graph[i][j]=INF;
        }
    }

    while(bus--){
        int start,end,cost; cin>>start>>end>>cost;
        if(graph[start][end]>cost) graph[start][end]=cost;
    }

    int dept,dest; cin>>dept>>dest;
    dijkstra(dept);
    cout<<dist[dest];
}

