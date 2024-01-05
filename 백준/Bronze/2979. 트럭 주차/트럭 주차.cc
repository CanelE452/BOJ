#include <iostream>

using namespace std;

    int A,B,C; 
    int t[101]={0,};
    int sum=0;

int main(){
    cin>>A>>B>>C;

    for(int i=0;i<3;i++){
        int s,e; cin>>s>>e;

        for(int j=s;j<e;j++) t[j]++;
    }

    for(int i=1;i<=100;i++){
        if(t[i]==1) sum+=t[i]*A;
        else if(t[i]==2) sum+=B*t[i];
        else sum+=C*t[i];
    }
    cout<<sum<<"\n"; 
}

