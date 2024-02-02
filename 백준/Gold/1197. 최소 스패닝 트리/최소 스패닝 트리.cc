//<크루스칼 알고리즘 코드>


// union-find 기법을 쓴다
// 가장 작은 가중치순으로 노드들이 순환하지 않음을 만족하면서 더하면 된다

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


//---------------------------------------------------------------------

//<프림 알고리즘 코드>


// 우선순위큐를 사용
// 다익스트라와 비슷
// 그래프를 넣고 우선순위 큐에 처음 넣고 방문 기록과 pq안에 있는 값들 다시 pq 에 넘

// #include <iostream>
// #include <vector>
// #include <queue>
// #define INF 1e9
// using namespace std;

// typedef pair<int,int> pii;
// long long ans;
// bool visited[10001];
// vector<pii> graph[10001];
// priority_queue <pii,vector<pii>,greater<pii>> pq;

// int main(){
//     int v,e; cin>>v>>e;

//     for(int i=0;i<e;i++){
//         int a,b,c; cin>>a>>b>>c;
//         graph[a].push_back({b,c});
//         graph[b].push_back({a,c});
//     }
//     pq.push({0,1});

//     while(!pq.empty()){
//         int weight=pq.top().first;
//         int cur=pq.top().second;
        
//         pq.pop();

//         if(visited[cur]) continue; visited[cur]=true;
//         ans+=weight;

//         for(int i=0;i<graph[cur].size();i++){
//             int next_n=graph[cur][i].first;
//             int next_w=graph[cur][i].second;

//             pq.push({next_w,next_n});
//         }
//     }
//     cout<<ans;
// }
