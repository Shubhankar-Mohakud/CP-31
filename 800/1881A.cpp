#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    for(int i=0; i<6; i++){
        int res = x.find(s);
        if(res!=string::npos){
            cout<<i<<"\n";
            return;
        }
        x += x;
    }
    cout<<"-1\n";
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