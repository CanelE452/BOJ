#include <iostream>
#include <vector>

using namespace std;

typedef pair<int,int> pii;

vector<pii> v;
int arr[51];

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }

    for(int i=0;i<n;i++){
        pii curr=v[i];
        int number=1;
        for(int j=0;j<n;j++){
            if(j!=i){
                if(curr.first<v[j].first && curr.second<v[j].second)
                number++;
            }
        }
        arr[i]=number;
    }
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";


}
