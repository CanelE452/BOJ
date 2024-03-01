#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v;

int main(){
    for(int i=0;i<3;i++){
        int n; cin>>n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(int num:v) cout<<num<<" ";
} 