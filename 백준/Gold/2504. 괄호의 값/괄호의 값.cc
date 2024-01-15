#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
stack <char> st;

int main() {
    cin>>str;

    int ans=0,tmp=1;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            tmp*=2;
            st.push('(');
        }
        else if(str[i]=='['){
            tmp*=3;
            st.push('[');
        }
        else if(str[i]==')'){
            if(st.empty() ||st.top()!='('){
                ans=0;
                break;
            }
            else if(str[i-1]=='('){
                ans+=tmp;
                tmp/=2;
                st.pop();
            }
            else {
                tmp/=2;
                st.pop();
            }
        }
        else if(str[i]==']'){
            if(st.empty() || st.top()!='['){
                ans=0;
                break;
            }
            else if(str[i-1]=='['){
                ans+=tmp;
                tmp/=3;
                st.pop();
            }
            else {
                tmp/=3;
                st.pop();
            }
        }        
    }

    if(!st.empty()) ans=0;

    cout<<ans<<"\n";   
    return 0; 

}     
