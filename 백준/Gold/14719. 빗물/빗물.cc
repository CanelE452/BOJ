// 투포인터를 이용해서 시간복잡도 줄일수 있
// #include <iostream>
// #include <vector>

// using namespace std;

// int H,W,ans=0;

// int main() {
//     cin>>H>>W;
//     vector<int> v(W);

//     for(int i=0;i<W;i++) cin>>v[i];

//     for(int i=1;i<W-1;i++){
//         int left=0,right=0;
//         for(int j=0;j<i;j++) left=max(left,v[j]);
//         for (int j = W - 1; j > i; j--) right = max(right, v[j]);
//         ans+=max(0,min(left,right)-v[i]);
//     }
//     cout<<ans;
// }     



#include <iostream>

using namespace std;

int H,W;
bool arr[600][600]={false,};
int ans=0;
int main() {
    cin>>H>>W;

    for(int i=0;i<W;i++){
        int num; cin>>num;
        for(int j=0;j<num;j++) arr[j][i]=true;
    }

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(!arr[i][j]){
                int left=j,right=j;
                bool isleft=0,isright=0;

                while(left>=0){
                    if(arr[i][left]==1){
                        isleft=1;
                        break;
                    }
                    left--;
                }

                while(right<W){
                    if(arr[i][right]==1){
                        isright=1;
                        break;
                    }
                    right++;
                }

                if(isleft && isright) ans++;
            }
        }
    }

    cout<<ans;
}     
