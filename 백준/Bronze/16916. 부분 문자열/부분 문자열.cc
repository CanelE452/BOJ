// [핵심]   문자열 매칭은 O(N) 의 시간복잡도를 가진다


//#include<cstring> 안에있는 strstr함수 사용 
// 시간복잡도 O(N+M)
// .c_str() string의 첫 문자의 주소
//strstr 함수 또한 시간 복잡도가 O(NM)인데, GCC의 라이브러리 구현인 libstdc++에서는 O(N+M)의 시간 복잡도의 알고리즘으로 구현

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s,p; cin>>s>>p;
    if(strstr(s.c_str(),p.c_str())!=NULL) cout<<1;
    else cout<<0;
}
//-----------------------------------------------------------------------

// KMP 알고리즘
// 시간복잡도 O(N)
//실패함수를 미리 만들고 실패함수를 바탕으로 parent 배열의 중복되는 부분을 넘기면서 푼다

// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> makeTable(string p){
//     vector<int> table(p.size(),0);
//     int j=0;
//     for(int i=1;i<p.size();i++){
//         while(j>0 && p[i]!=p[j]) j=table[j-1];
//         if(p[i]==p[j]) table[i]=++j;
//     }
//     return table;
// }

// int kmp(string s,string p){
//     vector<int> table=makeTable(p);
//     int j=0;
//     for(int i=0;i<s.size();i++){
//         while(j>0 && s[i]!=p[j]) j=table[j-1];
//         if(s[i]==p[j]){
//             if(++j==p.size()) return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     string s,p; cin>>s>>p;
//     cout<<kmp(s,p);
// }
