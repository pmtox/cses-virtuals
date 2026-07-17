#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n;cin>>n;
    vector<int>arr;
    for(int i = 1 ; i <= n ; i++){
        arr.push_back(i);
    }
    reverse(arr.begin() , arr.end());
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}