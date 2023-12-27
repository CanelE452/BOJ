#include <iostream>

using namespace std;
int dp[11]={0,1,2,4};
int main() {
    int n;
    cin>>n;
    for(int i=4;i<=10;i++)
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    while(n--){
        int num;
        cin>>num;
        cout<<dp[num]<<"\n";
    }
}
