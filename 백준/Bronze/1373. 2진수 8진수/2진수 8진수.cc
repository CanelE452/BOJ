#include <iostream>

using namespace std;

int main(){
    string s; cin>>s;
    int start,l=s.size();

    if(l%3==1) {
        cout<<(s[0]-'0');
        start=1;
    }
    else if(l%3==2){
        cout<<(s[0]-'0')*2+(s[1]-'0');
        start=2;
    }
    else if(l%3==0) start=0;

    for(int i=start;i<s.size();i+=3){
        cout<<(s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0');
    }
}
