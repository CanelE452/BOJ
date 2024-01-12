#include <iostream>

using namespace std;
    
int N,MaxNum=-1e9,MinNum=1e9; 
int num[13];
int oper[4];

void dfs(int val,int now){
    if(now==N){
        MaxNum=max(MaxNum,val);
        MinNum=min(MinNum,val);
        return;
    }
    if(oper[0]!=0){
        oper[0]--;
        dfs(val+num[now],now+1);
        oper[0]++;
    }
    if(oper[1]!=0){
        oper[1]--;
        dfs(val-num[now],now+1);
        oper[1]++;
    }
    if(oper[2]!=0){
        oper[2]--;
        dfs((val*num[now]),now+1);
        oper[2]++;
    } 
    if(oper[3]!=0){
        oper[3]--;
        dfs(val/num[now],now+1);
        oper[3]++;
    } 
    return;
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++) cin>>num[i];
    for(int i=0;i<4;i++) cin>>oper[i];
    dfs(num[0],1);
    cout<<MaxNum<<"\n"<<MinNum;
}

