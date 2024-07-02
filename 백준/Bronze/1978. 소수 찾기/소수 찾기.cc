#include <iostream>

using namespace std;

int prime(int n){
    if(n<2) return 0;
    for(int i=2;i*i<=n+1;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n,cnt=0; cin>>n;
    while(n--){
        int num; cin>>num;
        if(prime(num)) cnt++;
    }
    cout<<cnt;
}