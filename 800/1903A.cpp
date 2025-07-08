#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr){
    int n = arr.size();
    for(int i=1; i<n; i++){
        if(arr[i-1]<=arr[i]) continue;
        else return false;
    }
    return true;
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    if(isSorted(arr)) cout<<"YES\n";
    else if(k>1) cout<<"YES\n";
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