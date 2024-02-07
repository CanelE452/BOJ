#include <iostream>
#include <stack>

using namespace std;

stack<char> st;
int main(){
    int n; cin>>n;
    int ans=0;
    while(n--){
        string str; cin>>str;
        while(!st.empty()) st.pop();
        for(int i=0;i<str.size();i++){
            if(st.empty()) st.push(str[i]);
            else{
                if(st.top()==str[i]) st.pop();
                else st.push(str[i]);
            }
        }
        if(st.empty()) ans+=1;
    }
    cout<<ans;
}