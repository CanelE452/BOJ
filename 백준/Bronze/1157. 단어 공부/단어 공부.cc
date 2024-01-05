#include <iostream>

using namespace std;

int main(){
   string str; cin>>str;
   int alp[27]={0,};
   for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
            alp[str[i]-'a']++;
       else if(str[i]>='A' && str[i]<='Z')
            alp[str[i]-'A']++;
   }
    int most=-1,index=-1,flag=0;

    for(int i=0;i<27;i++){
        if(alp[i]==most){
            flag =0;
        }
        if(alp[i]>most){
            most=alp[i];
            flag=1;
            index=i;
        }
    }

    if(!flag) cout<<"?";
    else cout<<char('A'+index);

    return 0;

}

