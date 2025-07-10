#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int neg = 0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x<0) neg++;
    }
    int ops=0;
    int pos = n - neg;
    if(neg>pos) {
        if((neg-pos)%2==0){
            ops += (neg-pos)>>1;
        } else{
            ops += (neg-pos)>>1;
            ops++;
        }
    }
    neg -= ops;
    if(neg&1){
        ops++;
    }
    cout<<ops<<"\n";
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