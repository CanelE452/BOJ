#include <iostream>

#define MAX 110
using namespace std;

int n,k;
int Coin[MAX];
int DP[10010];

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>Coin[i];

    DP[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=Coin[i];j<=k;j++){
            DP[j]+=DP[j-Coin[i]];
        }
    }
    cout<<DP[k];
}