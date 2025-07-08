#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> arr;
    arr.push_back(0);
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    arr.push_back(arr[arr.size()-1]+2*abs(x-arr[arr.size()-1]));
    int minfuel = INT_MIN;
    for(int i=1; i<arr.size(); i++){
        minfuel = max(minfuel, abs(arr[i]-arr[i-1]));
    }
    cout<<minfuel<<"\n";
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
}