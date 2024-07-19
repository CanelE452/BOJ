#include <iostream>

using namespace std;


int main(){
    int n; 
    char arr[16];
    cin>>n; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Ascore=0,Bscore=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='A') Ascore++;
        else if(arr[i]=='B') Bscore++;
    }

    if(Ascore>Bscore) cout<<'A';
    else if(Ascore<Bscore) cout<<'B';
    else cout<<"Tie";
}
