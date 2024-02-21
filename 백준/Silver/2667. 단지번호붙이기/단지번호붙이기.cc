#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define MAX 26

using namespace std;

int n;
char graph[MAX][MAX]={0,};
bool visited[MAX][MAX]={false,};
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};

typedef pair<int,int> pii;
vector <int> ans;

int bfs(int i,int j){
    queue <pii> q;
    q.push({i,j});
    visited[i][j]=true;
    int cnt=1;
    while(!q.empty()){
        pii cur=q.front();
        q.pop();
        int x=cur.first, y=cur.second;

        for(int i=0;i<4;i++){
            int nx=x+dx[i], ny=y+dy[i];
            if(nx<0 || nx>=n || ny<0 || ny>=n || visited[nx][ny] || graph[nx][ny]!='1') continue;
            visited[nx][ny]=true;
            q.push({nx,ny});
            cnt++;
        }
    }
    return cnt;
}

int main(){
    vector <int> v;

    cin>>n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>graph[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(graph[i][j]=='1' && !visited[i][j]) v.push_back(bfs(i,j));          
        
    sort(v.begin(),v.end());
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++) cout<<v[i]<<"\n";

}