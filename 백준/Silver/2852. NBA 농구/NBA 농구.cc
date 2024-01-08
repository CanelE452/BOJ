#include <iostream>

using namespace std;

int n,team,h,m;
int awin=0,bwin=0,score=0,tmp,flag=1,win=-1;

int main(){
    cin>>n;
    while(n--){
        cin>>team;
        scanf("%d:%d",&h,&m);

        if(team==1) score++;
        else score--;

        if(score!=0 && flag){
            tmp=h*60+m;
            flag=0;
            if(score>0) win=1;
            else win=0;
        }
        else if(score==0){
            flag=1;

            if(win) awin+=(h*60+m)-tmp;
            else bwin+=(h*60+m)-tmp;            
        }
    }

    if(!flag){
        if(win) awin+=(48*60)-tmp;
        else bwin+=(48*60)-tmp; 
    }

    printf("%02d:%02d\n",awin/60,awin%60);
    printf("%02d:%02d",bwin/60,bwin%60);



}
