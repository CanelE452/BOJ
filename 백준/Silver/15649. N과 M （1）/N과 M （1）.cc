#include <iostream>

using namespace std;

int N,M; 
bool visited[9]={0,};
int arr[9]={0,};


void fun(int pos){
    if(pos==M){
        for(int i=0;i<M;i++) cout<<arr[i]<<" ";
        cout<<"\n";
        return;
    }
    for(int i=1;i<=N;i++){
        if(!visited[i]){
            arr[pos]=i;
            
            visited[i]=true;
            fun(pos+1);
            visited[i]=false;
        }
    }
}

int main(){
    cin>>N>>M;
    fun(0);
}
