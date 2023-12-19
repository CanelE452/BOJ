#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    bool iscpp=true;
    bool isjava=true;
    // 조건 찾기

     for (int i = 0; i < str.size(); i++){
        if(isupper(str[i])) iscpp=false;

        if(str[i]=='_') {
            isjava=false;
            if(str[i-1]=='_') iscpp=false;
        }

        
    }


    if(str[0]=='_' || str[str.size()-1]=='_') iscpp=false;
    if(isupper(str[0])) isjava=false;

    
    
    if (iscpp&isjava) cout<<str;

    else if (iscpp) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '_') {
                str.erase(str.begin() + i);
                if (i < str.size()) {  
                    str[i] = toupper(str[i]);
                }
            }
        }
        cout << str;
    } 

    else if (isjava) {
        for (int i = 0; i < str.size(); i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = tolower(str[i]);
                str.insert(i, "_");
            }
        }
        cout << str;
    } 
    
    else cout << "Error!";
    

    return 0;
}
