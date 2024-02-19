#include <iostream>
#include <algorithm>
#define MAX 51
using namespace std;

int n; 
char board[MAX][MAX]={0,};

int count(){
    int ans=0;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=0;j<n;j++){
            if(board[i][j]==board[i][j+1]) count++;
            else{
                ans=max(ans,count);
                count=1;
            }
        }
    }

    for(int j=0;j<n;j++){
        int count=1;
        for(int i=0;i<n;i++){
            if(board[i][j]==board[i+1][j]) count++;
            else{
                ans=max(ans,count);
                count=1;
            }
        }
    }
    return ans;
}

int fun(){
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            swap(board[i][j],board[i][j+1]);
            ans=max(ans,count());
            swap(board[i][j],board[i][j+1]);

            swap(board[i][j],board[i+1][j]);
            ans=max(ans,count());
            swap(board[i][j],board[i+1][j]);
        }
    }
    return ans;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }
    cout<<fun();
}