#include <iostream>

using namespace std;

int main() {
    long long n; cin>>n;
    long long num=1,sum=0,cnt=0;
    while(1){
        sum=sum+num;
        cnt++;
        if(sum>n){
            cnt--;
            break;
        }
        num++;
    }
    cout<<cnt;
}
 
