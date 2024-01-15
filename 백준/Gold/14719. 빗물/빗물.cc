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
