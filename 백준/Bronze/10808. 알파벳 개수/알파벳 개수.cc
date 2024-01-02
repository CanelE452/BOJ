#include <iostream>
#
using namespace std;

int main() {

	string s;
	int alp[27]={0,};
	cin>>s;

	for(int i=0;i<=s.size();i++){
		alp[s[i]-'a']++;
	}

	for(int i=0;i<26;i++){
		cout<<alp[i]<<" ";
	}
}