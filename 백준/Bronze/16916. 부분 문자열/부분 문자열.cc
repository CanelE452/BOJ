#include <bits/stdc++.h>

using namespace std;

int main(){
    string S,P; cin>>S>>P;
    if(strstr(S.c_str(),P.c_str())!=NULL) cout<<1;
    else cout<<0;
}
