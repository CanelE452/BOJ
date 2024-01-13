#include <iostream>
#include <string>

using namespace std;

string str;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    cin.ignore();
    while(n--){
        getline(cin,str);
        str[0]=toupper(str[0]);
        cout<<str<<"\n";
    }
}
