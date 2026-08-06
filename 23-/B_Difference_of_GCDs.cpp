#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// void solve(){
//     ll n , l , r; cin>>n>>l>>r;
//     // if(abs(l - r) < n){
//     //     cout<<"NO"<<endl;
//     //     return ;
//     // }
//     // vector<ll>pref;
//     // for(int i = l ; i <= r ; i++){
//     //     if(__gcd(i , arr[l]))
//     // }
//     ll k = r - l;
//     vector<ll>arr(k + 1);
//     iota(arr.begin() , arr.end() , l);
//     // for(ll it : arr){
//     //     cout<<it<<" ";
//     // }
//     // cout<<endl;
//     map<ll , ll>mpp;
//     vector<ll>ans;
//     vector<bool>used(arr.size() , false);
//     for(ll i = 1 ; i <= n ; i++){
//         ll isok = false;
//         for(ll j = 0 ; j < arr.size() ; j++){
//             if(used[j]) continue;
//             if(mpp.find(__gcd(i , arr[j])) == mpp.end()){
//                 mpp[__gcd(i , arr[j])]++;
//                 ans.push_back(arr[j]);
//                 used[j] = true;
//                 isok = true;
//                 break;
//             }
//         }
//         if(!isok){
//             cout<<"NO"<<endl;
//             return;
//         }
//     }
//     cout<<"YES"<<endl;
//     for(ll it : ans){
//         cout<<it<<" ";
//     }
//     cout<<endl;
// }
void solve2(){
    ll n , l , r;cin>>n>>l>>r;
    vector<ll>arr(n);
    bool isok = true;
    for(int i = 1 ; i <= n ; i++){
        ll mod = l % i;
        ll ans = (mod == 0) ? l : (l + (i - mod));
        if(ans > r){
            isok = false;
            break;
        }
        else{
            arr[i - 1] = ans;
        }
    }
    if(!isok){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int it : arr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        //solve();
        solve2();
    }
    return 0;
}