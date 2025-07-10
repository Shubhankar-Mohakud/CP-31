#include<bits/stdc++.h>
using namespace std;

void solve(){
    
}

int main(){
    /*
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    */
    int n;
    cin>>n;
    int least = INT_MAX;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        least = min(least, abs(x));
    }
    cout<<least<<"\n";
    
    return 0;
}