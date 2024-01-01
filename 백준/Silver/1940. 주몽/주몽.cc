#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;

int main(){

    int N,armor;

    cin>>N>>armor;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());

    int cnt=0;
    for(int start=0;start<N;start++){
        for(int end=start+1;end<N;end++){
            if(v[start]+v[end]==armor) cnt++;
        }
    }
   
    cout<<cnt;
}