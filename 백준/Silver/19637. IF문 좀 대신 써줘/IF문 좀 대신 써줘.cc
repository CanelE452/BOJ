#include<iostream>
#define MAX int(10e5)
using namespace std;

struct Title{
    string name;
    int num;
};
int N,M;
Title titles[MAX];

Title binarySearch(int val,int first,int last);

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>N>>M;

    for(int i=0;i<N;i++) cin>>titles[i].name>>titles[i].num;

    for(int i=0;i<M;i++){
        int num;
        cin>>num;
        Title result=binarySearch(num,0,N-1);
        cout<<result.name<<"\n";
    }
}

Title binarySearch(int val,int first,int last){
    if(first<=last){
        int mid=(first+last)/2;
        if(val<=titles[mid].num) return binarySearch(val,first,mid-1);
        else return binarySearch(val,mid+1,last); 
    }
    else return titles[first];
}