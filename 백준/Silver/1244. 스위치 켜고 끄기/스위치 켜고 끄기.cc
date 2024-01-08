#include <iostream>

using namespace std;

int SwNum;
int sw[101]={-1,};

int main(){
    cin>>SwNum;

    for(int i=1;i<=SwNum;i++){
        int num; cin>>num;
        sw[i]=num;
    }

    int PNum; cin>>PNum;
    while(PNum--){
        int gender,select; 
        cin>>gender>>select;
        if(gender==1){
            for(int i=select;i<=SwNum;i+=select){
                sw[i]=!sw[i];
            }
        }
        else if(gender==2){
            sw[select]=!sw[select];
            int left=select-1,right=select+1;
            while(left>=1 && right<=SwNum && sw[left] == sw[right]){
                sw[left]=!sw[left];
                sw[right]=!sw[right];
                left--;
                right++;
            }
        }
    }

    for(int i=1;i<=SwNum;i++){
        cout<<sw[i]<<" ";
        if(i%20==0) cout<<"\n";
    }
}

