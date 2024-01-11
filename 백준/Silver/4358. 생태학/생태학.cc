#include <iostream>
#include <map>

using namespace std;

map<string,int> m;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str;
    int cnt=0;
    while(getline(cin,str))
    {
        if(m.find(str)==m.end()) m.insert({str,1});
        else m[str]++;
        cnt++;
    }
    cout<<fixed;
    cout.precision(4);
    for(auto v :m){
        cout<<v.first<<" "<<(double)v.second/cnt*100<<"\n";
     
    }
}
