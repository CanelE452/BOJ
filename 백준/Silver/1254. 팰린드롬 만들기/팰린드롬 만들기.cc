#include <iostream>

using namespace std;


int main(){
    string s;
    int ans;
    bool correct;
    cin>>s;
    for(int i=0;i<s.size();i++){
        correct=1;
        for(int j=i;j<s.size();j++){
            if(s[j]!=s[s.size()-1-(j-i)]){
                correct=0;
                break;
            }
        }
        if(correct){
            ans=i;
            break;
        }

    }
    cout<<ans+s.size();

}