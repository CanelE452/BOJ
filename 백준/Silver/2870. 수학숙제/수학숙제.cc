#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool cmp(string a,string b){
    if(a.size()==b.size())
        return a<b;
    return a.size()<b.size();
}
int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    string str,tmp;
    vector<string> v;

    cin>>N;
    while(N--){
        tmp="";
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i]>='0' && str[i]<='9')
                tmp+=str[i];
            else if(!tmp.empty()){
                while(tmp.size()>1 && tmp[0]=='0')
                    tmp.erase(0,1);     
                v.push_back(tmp);
                tmp="";
            }
        }
        if(!tmp.empty()){
            while(tmp.size()>1 && tmp[0]=='0')
                tmp.erase(0,1);     
            v.push_back(tmp);
            tmp="";
        }
          
    }

    sort(v.begin(),v.end(),cmp);

    for(auto s : v) cout<<s<<"\n";

}
