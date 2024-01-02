#include <iostream>

using namespace std;

int main() {
	int N;
	int alp[27]={0,};
	cin>>N;
	while(N--){
		string name;
		cin>>name;
		alp[name[0]-'a']++;
	}
	bool isname=0;
	for(int i=0;i<26;i++){
		if(alp[i]>=5){
			isname=1;
			cout<<char(i+'a');
		}
	}

	if(!isname) cout<<"PREDAJA";
}