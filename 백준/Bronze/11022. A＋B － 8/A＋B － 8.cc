#include <iostream>

using namespace std;

int main(){
    int T; cin>>T;
    int cnt=1;
    while(T--){
        int a,b; cin>>a>>b;
        cout<<"Case #"<<cnt++<<": "<<a<<" + "<<b<<" = "<<a+b<<"\n";
    }
    
}