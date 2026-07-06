#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n , k;cin>>n>>k;
    vector<int> arr1(n) , arr2(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>arr2[i];
    }
    int ans = 0 , prev_bi = 0 , mx = 0;
    for(int i = 0 ; i < min(n , k) ; i++){
        prev_bi = max(prev_bi , arr2[i]);
        ans += arr1[i];
        mx = max(mx , ans + prev_bi * (k - i - 1));
    }
    cout<<mx<<endl;
// 4
// 4 7
// 4 3 1 2
// 1 1 1 1
// -> 4 + 1 + 3 + 1 + 1 + 2 + 1 = 13

// 3 2
// 1 2 5
// 3 1 8
// -> 1 + 3 = 4

// 5 5
// 3 2 4 1 4
// 2 3 1 4 7
// -> 3 + 2 + 3 + 3 + 4 = 15

// 6 4
// 1 4 5 4 5 10
// 1 5 1 2 5 1
// -> 1 + 4 + 5 + 5 = 15

}
int32_t main(){
    IOS;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}