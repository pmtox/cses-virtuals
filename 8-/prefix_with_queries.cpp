#include<bits/stdc++.h>
using namespace std;
#define int long long int
void genPref(const vector<int>&arr , vector<int>&prefix){
    for(int i = 1 ; i <= arr.size() ; i++){
        prefix[i] = prefix[i-1] + arr[i-1];
    }
}
void solve(){
    int n;cin>>n;
    int l , r;cin>>l>>r;
    vector<int>arr(n , 0);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<int>prefix(n + 1, 0);
    genPref(arr , prefix);
    int sum = prefix[r] - prefix[l-1];
    cout<<sum<<endl;
}
int32_t main(){
    solve();
    return 0;
}