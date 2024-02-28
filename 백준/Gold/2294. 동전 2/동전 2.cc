#include <iostream>
#include <algorithm>

#define MAX 987654321
using namespace std;

int n,k; 
int Coin[110];
int Dp[10010];

int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>Coin[i];

    sort(Coin,Coin+n);

    fill(Dp,Dp+k+1,MAX);
    Dp[0]=0;

    for(int i=0;i<n;i++){
        for(int j=Coin[i];j<=k;j++){
            Dp[j]=min(Dp[j-Coin[i]]+1,Dp[j]);
        }
    }

    if(Dp[k]==MAX) cout<<-1;
    else cout<<Dp[k];

} 