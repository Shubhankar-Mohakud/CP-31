#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr;
    int SUM = 0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        SUM += x;
        arr.push_back(x);
    }
    for(int i=0; i<n; i++){
        bool a,b;
        a = (SUM-arr[i])&1;
        b = arr[i]&1;
        if(a==b){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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