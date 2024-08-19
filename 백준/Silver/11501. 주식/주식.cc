#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int T; cin>>T;
    while(T--){
        vector<int> v;

        int day;cin>>day;

        for(int i=0;i<day;i++){
            int price; cin>>price;
            v.push_back(price);
        }

        int mx=-1;
        long result=0;

        for(int i=day-1;i>=0;i--){
            mx=max(mx,v[i]);
            result+=mx-v[i];
        }
        cout<<result<<"\n";
    }
}
