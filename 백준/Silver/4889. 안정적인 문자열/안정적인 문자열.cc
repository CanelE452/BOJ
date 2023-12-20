#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    int num=0;
    while(1){
        cin>>str;
        if(str[0]=='-') break;

        stack <char> s;
        for(int i=0;i<str.size();i++){
			if (str[i] == '}' && !s.empty() && s.top() == '{')
				s.pop();
			else
				s.push(str[i]);
        }

        int ans=0;
        while(!s.empty()){
            char first,second;
            first=s.top(); s.pop();
            second=s.top(); s.pop();

            if(first==second) ans+=1;
            else ans+=2;
        }
        
        cout<<++num<<". "<<ans<<'\n';
    }
    
    return 0;
}