#include <iostream>
#include <queue>

using namespace std;

priority_queue <int> pq;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;

    while(n--){
        int x; cin>>x;
        pq.push(x);
        if(x==0){
            cout<<pq.top()<<"\n";
            pq.pop();
        }
    }
}