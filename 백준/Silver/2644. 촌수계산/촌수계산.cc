#include <iostream>
#include<queue>


using namespace std;
int n,m,tar_x,tar_y;
int arr[102][102];
int visited[102];
queue<int> q;
void bfs(int k){
    q.push(k);

    while(!q.empty()){
        k=q.front();
        q.pop();
        for(int i=1;i<=n;i++){
            if(arr[k][i]!=0 && !visited[i]){
                q.push(i);
                visited[i]=visited[k]+1;
            }
        }
    }
}



int main() {
    cin>>n;
    cin>>tar_x>>tar_y;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;
    }
    bfs(tar_x);

    if(visited[tar_y]==0) visited[tar_y]=-1;
    cout<<visited[tar_y];
}
