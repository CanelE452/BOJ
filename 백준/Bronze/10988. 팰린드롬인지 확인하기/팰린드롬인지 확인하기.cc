#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin>>s;
	int l=s.length();

	for(int i=0;i<l;i++){
		if(s[i]!=s[l-i-1]){
			cout<<0;
			return 0;
		}
	}
	cout<<1;
	return 0;
}