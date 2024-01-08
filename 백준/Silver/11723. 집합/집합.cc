#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set <int> st;

int M, num;
string s;

int main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   cin>>M;
   while(M--){
        cin>>s;
        if(s=="add" || s=="remove" || s=="toggle" || s=="check") cin>>num;

        if(s=="add"){
            st.insert(num);
        }
        else if(s=="remove"){
            st.erase(num);
        }
        else if(s=="check"){
            if(st.find(num)!= st.end()) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else if(s=="toggle"){
            if(st.find(num)!= st.end()) st.erase(num);
            else st.insert(num);
        }
        else if(s=="all"){
            for(int i=1;i<=20;i++) st.insert(i);
        }
        else if(s=="empty"){
            st.clear();
        }
   }

}

