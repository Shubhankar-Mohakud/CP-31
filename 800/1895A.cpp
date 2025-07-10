#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    vector<int> b;
    vector<int> c;
    for(int i=0; i<n; i++){
        if(arr[i]==arr[0]) b.push_back(arr[i]);
        else c.push_back(arr[i]);
    }
    if(c.size()==0){
        cout<<"-1\n";
        return;
    }
    cout<<b.size()<<" "<<c.size()<<"\n";
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<" ";
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