#include <iostream>

using namespace std;

int N,S;
int ans=1e9;
int psum[100001]={0};
int arr[100001];


int main() {
    cin>>N>>S;
    for(int i=0;i<N;i++) cin>>arr[i];
    for(int i=1;i<=N;i++) psum[i]=psum[i-1]+arr[i-1];

    int left=0,right=1;
    bool flag=false;
    while(right<=N){
        int sum=psum[right]-psum[left];

        if(sum<S) right++;
        else if(sum>=S){
            flag=true;
            ans=min(right-left,ans);
            left++;
        }
    }

    if(flag) cout<<ans;
    else cout<<0;
    
}
 
