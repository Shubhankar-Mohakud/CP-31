#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        arr.push_back(x);
    }
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            cout<<"0\n";
            return;
        }
    }
    int minIndex = 1;
    int minGap = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i]-arr[i-1]<minGap){
            minGap = min(minGap, arr[i]-arr[i-1]);
            minIndex=i;
        }
    }
    int a = arr[minIndex-1];
    int b = arr[minIndex];
    int count = (b-a)>>1;
    count++;
    cout<<count<<"\n";
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