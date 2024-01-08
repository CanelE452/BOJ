#include <iostream>
#include <deque>

using namespace std;

deque <int> dq;

int main(){
    int tmp;
    int n; cin>>n;
    for(int i=1;i<=n;i++) dq.push_back(i);
    while(dq.size()!=1){
        dq.pop_front();
        tmp=dq.front();
        dq.pop_front();
        dq.push_back(tmp);
    }
    cout<<dq.front();
}
