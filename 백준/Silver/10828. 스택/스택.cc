#include <iostream>
#include <stack>

using namespace std;

stack <int> st;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N; cin>>N;
    cin.ignore(0);
    while(N--){
        string str; cin>>str;
        if(str=="push"){
            int num; cin>>num;
            st.push(num);
        }
        else if(str=="pop"){
            if(!st.empty()){
                cout<<st.top()<<"\n";
                st.pop();
            }
            else cout<<-1<<"\n";
        }
        else if(str=="size"){
            cout<<st.size()<<"\n";
        }
        else if(str=="empty"){
            if(st.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else if(str=="top"){
            if(st.empty()) cout<<-1<<"\n";
            else cout<<st.top()<<"\n";
        }
    }

}
