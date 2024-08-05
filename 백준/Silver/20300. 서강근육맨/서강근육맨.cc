#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <long> v;


int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        long num;cin>>num;
        v.push_back(num);
    }

    sort(v.begin(),v.end());

    if(n%2==1){
        long m=0;
        for(int i=0;i<(n-1)/2;i++){
            m= max(m,v[i]+v[n-2-i]);
        }
        m=max(m,v[n-1]);
        cout<<m;
    }
    else{
        long m=0;
        for(int i=0;i<n/2;i++){
            m= max(m,v[i]+v[n-1-i]);
        }
        cout<<m;
    }
}