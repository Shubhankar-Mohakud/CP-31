#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    int minELe = INT_MAX;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        minELe = min(minELe,x);
        arr.push_back(x);
    }
    /*
    for(int i=0; i<=n-3; i++){
        if(arr[i]>arr[i+2]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    */
    if(arr[0]==minELe) cout<<"YES\n";
    else cout<<"NO\n";
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