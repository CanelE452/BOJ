#include <iostream>

using namespace std;
int two,five;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>>T;

    while(T--){
        int num;
        cin>>num;
        two=0;five=0;
        
        for(int i=2;i<=num;i*=2)
            two+=num/i;
        for(int i=5;i<=num;i*=5)
            five+=num/i;
        
        cout<<min(two,five)<<"\n";
    }

}