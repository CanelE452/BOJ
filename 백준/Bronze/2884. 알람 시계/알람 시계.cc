#include <iostream>

using namespace std;

int main(){
    int h,m; cin>>h>>m;
    int total=h*60+m-45+60*24;
    total=total%(60*24);
    cout<<total/60<<" "<<total%60;
}