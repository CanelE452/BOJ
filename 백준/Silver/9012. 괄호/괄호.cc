#include <iostream>
#include <stack>

using namespace std;

stack <char> st;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    while(n--){
        string str; cin>>str;
        while(!st.empty()) st.pop();
        
        for(int i=0;i<str.size();i++){
            if(str[i]=='(') st.push('(');
            else{
                if(st.empty()) st.push(')');
                else{
                    if(st.top()=='(') st.pop();
                    else st.push(')');
                }
            }
        }
        if(st.empty()) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}