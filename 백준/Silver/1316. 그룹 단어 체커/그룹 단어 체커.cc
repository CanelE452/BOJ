#include <iostream>
#include <string>

using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    while(n--){
        string str;
        int alph[27];
        for(int i=0;i<27;i++){
            alph[i]=0;
        }
        
        cin>>str;
        for(int i=0;i<str.length();i++){
           if(str[i]==str[i+1]){
                continue;
            }
            else{
                alph[str[i]-'a']++;
            }
        }
        
        bool flag=1;
        for(int i=0;i<27;i++){
            if(alph[i]>=2) flag=0;
        }
        if(flag) cnt++;
    }
    cout<<cnt;
}