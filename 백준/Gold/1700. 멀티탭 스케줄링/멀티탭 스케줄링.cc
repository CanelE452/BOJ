#include <iostream>

using namespace std;

int tap[101]={0,},order[101];
int plug,elec,ans=0; 

int main() {
    cin>>plug>>elec;
    for(int i=0;i<elec;i++) cin>>order[i];

    for(int i=0;i<elec;i++){
        bool flag=false;

        for(int j=0;j<plug;j++){
            if(tap[j]==order[i]){
                flag=true;
                break;
            }
        }
        if(flag) continue;

        for(int j=0;j<plug;j++){
            if(tap[j]==0){
                tap[j]=order[i];
                flag=true;
                break;
            }
        }
        if(flag) continue;

        int change,before=-1;
        for(int j=0;j<plug;j++){
            int now=0;
            for(int t=i+1;t<elec;t++){
                if(tap[j]==order[t]) break;
                now++;
            }
            if(now>before){
                before=now;
                change=j;
            }
        }
        tap[change]=order[i];
        ans++;
    }
    cout<<ans;
}
 
