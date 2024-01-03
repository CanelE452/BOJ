#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
    
    int n;
    long long sum=0;
    string tmp;
    char input;

    cin>>n;

    tmp="";

    while(n--){
        cin>> input;
        if(isdigit(input)){
            tmp+=input;
        }
         else if (isalpha(input)) {
            if (!tmp.empty()) {
                sum += stoll(tmp);
                tmp = "";
            }
            else continue;
        }
    }
    if (!tmp.empty())  sum += stoll(tmp);
    cout<<sum;
}
