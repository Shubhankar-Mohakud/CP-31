#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b, c;
    cin>>a>>b>>c;
    if(c&1){
        c -= 1;
        a += c>>1;
        a++;
        b += c>>1;
    } else{
        a += c>>1;
        b += c>>1;
    }

    a > b ? cout<<"First\n" : cout<<"Second\n";
    return;
}

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}