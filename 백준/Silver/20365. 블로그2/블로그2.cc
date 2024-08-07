#include <iostream>
#include <vector>

using namespace std;

vector<char> v;
vector<char> arr;

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        char c; cin>>c;
        if(c=='B') v.push_back('B');
        else v.push_back('R');
    }
    char curr=v[0];
    arr.push_back(curr);
    for(int i=0;i<n;i++){
        if(v[i]==curr) continue;
        else{
            arr.push_back(v[i]);
            curr=v[i];
        }
    }
    int B=0,R=0;
    for(char now : arr) {
        if(now=='B') B++;
        else R++;
    }
    if(B>R) cout<<1+R;
    else cout<<1+B;
}
