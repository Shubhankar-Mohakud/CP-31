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
    if(arr.size()==2) {
        cout<<"YES\n";
        return;
    }
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    
    
    if(mp.size()==1){
        cout<<"YES\n";
        return;
    }
    if(mp.size()==2){
        auto it1 = mp.begin();
        auto it2 = mp.end();
        it2--;
        int diff = it1->second - it2->second;
        // cout<<diff<<"\n";
        if(diff==1 || diff==0 || diff==-1){
            cout<<"YES\n";
            return;
        } else {
            cout<<"NO\n";
            return;
        }
    } else{
        cout<<"NO\n";
        return;
    }
    cout<<"Error\n";
    
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