#include <iostream>

using namespace std;



int main(){
    int n,m; cin>>n>>m;
    int ans=0,arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]<=m && arr[i]+arr[j]+arr[k]>ans){
                    ans=arr[i]+arr[j]+arr[k];
                }
            }
        }
    }
    cout<<ans;
}

