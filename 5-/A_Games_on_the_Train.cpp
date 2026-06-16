#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int cnt = *max_element(arr.begin() , arr.end()) - *min_element(arr.begin() , arr.end());
    cout<<cnt+1<<endl;
}
// 
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}