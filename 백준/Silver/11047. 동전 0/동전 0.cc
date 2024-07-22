#include <iostream>

using namespace std;


int main(){
    int arr[13];
    int N,K; cin>>N>>K;

    for(int i=0;i<N;i++)
        cin>>arr[i];
    int sum=0;
    for(int i=N-1;i>=0;i--){
        sum+=K/arr[i];
        K=K%arr[i];
    }
    cout<<sum;
}
