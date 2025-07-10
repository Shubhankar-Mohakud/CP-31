#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    vector<int> res;
    res.push_back(arr[0]);
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            if(arr[i]==1){
                res.push_back(1);
                res.push_back(arr[i]);
            } else{
                res.push_back(arr[i]-1);
                res.push_back(arr[i]);
            }
        } else res.push_back(arr[i]);
    }
    cout<<res.size()<<"\n";
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}