#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int A,B; cin>>A>>B;
    int ptrA=0,ptrB=0,idx=0;
    vector <int> va(A),vb(B),ans(A+B);
    for(int i=0;i<A;i++) cin>>va[i];
    for(int i=0;i<B;i++) cin>>vb[i];
    while(ptrA<A && ptrB<B){
        if(va[ptrA]<vb[ptrB]) ans[idx++]=va[ptrA++];
        else ans[idx++]=vb[ptrB++];
    }
    while(ptrA<A) ans[idx++]=va[ptrA++];
    while(ptrB<B) ans[idx++]=vb[ptrB++];

    for(int v:ans) cout<<v<<" ";
    


}     

