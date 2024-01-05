#include <iostream>
#include <unordered_set>
#include <sstream>

using namespace std;

int kword,blog;
unordered_set<string>st;



int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>kword>>blog;
    while(kword--){
        string s; cin>>s;
        st.insert(s);
    }
    while(blog--){
        string s; cin>>s;
        stringstream ss(s);
        string Token;
        while(getline(ss,Token,',')){
            if(st.find(Token)!=st.end())
                st.erase(Token);
        }
        cout<<st.size()<<"\n";
    }

}
//처음 map으로 해봤는데 찾아보니 런타임 난다고 했음 그래서 set으로 하는법을 배움
//배운내용 sstream 이랑 ,split 하는법 ,set

