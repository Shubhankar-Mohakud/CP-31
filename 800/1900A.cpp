#include<bits/stdc++.h>
using namespace std;


bool threeGapsAvailable(string arr){
    for(int i=0; i<=arr.size()-3; i++){
        if(arr[i]=='.' && arr[i+1]=='.' && arr[i+2]=='.') return true;
    }
    return false;
}

int countGaps(string arr){
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]=='.') count++;
    }
    return count;
}

void solve(){
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    
    if(arr.size()<3){
        cout<<countGaps(arr)<<"\n";
        return;
    }
    if(threeGapsAvailable(arr)){
        cout<<"2\n";
        return;
    } else {
        cout<<countGaps(arr)<<"\n";
        return;
    }
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