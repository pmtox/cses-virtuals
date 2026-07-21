#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(NULL);
// vector<ll> preff(vector<ll>&arr , ll &x , ll &y){
//     vector<ll>prr(4 , 0);  
//     // prr[arr[y]]++; 
//     for(int i = x ; i <= y ; i++){
//         prr[arr[i]]++;
//     }
//     return prr;
// }
void solve(){
    ll n,q;cin>>n>>q;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    // for(int i = 0 ; i < q ; i++){
    //     ll x , y;
    //     cin>>x>>y;
    //     x--;
    //     y--;
    //     vector<ll>pref = preff(arr , x , y);
    //     for(int it = 1 ; it < pref.size() ; it++){
    //         cout<<pref[it]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<ll>p1(n + 1 , 0);
    vector<ll>p2(n + 1 , 0);
    vector<ll>p3(n + 1 , 0);
    for(int i = 1 ; i <= n ; i++){
        p1[i] = p1[i-1];
        p2[i] = p2[i-1];
        p3[i] = p3[i-1];
        if(arr[i - 1] == 1) p1[i]++;
        else if(arr[i - 1] == 2) p2[i]++;
        else p3[i]++;
    }   
    for(int i = 0 ; i < q ; i++){
        ll x , y;
        cin>>x>>y;
        cout<<p1[y] - p1[x - 1]<<" "<<p2[y] - p2[x - 1]<<" "<<p3[y] - p3[x - 1]<<endl;
    }
}
int32_t main(){
    solve();
    return 0;
}
