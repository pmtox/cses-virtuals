#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);

// ----------------------->>> APPROACH 2;

void solve2(){
    ll n;cin>>n;
    vector<ll>a(n);
    vector<ll>b(n + 1);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    for(int i = 0 ; i < n ; i++) cin>>b[i];
    b[n] = LLONG_MIN;
    ll l_tmp = 0 , len = 0;
    vector<vector<ll>>v;
    for(int i = 0 ; i < n ; i++){
        if(b[i] > b[i + 1]){
            len = i - l_tmp + 1;
            v.push_back({l_tmp + 1 , i + 1 , len});
            l_tmp = i + 1;
        }
    }
    sort(v.begin() , v.end() , [](const vector<ll>&a , const vector<ll>&b){
        return a[2] > b[2];
    });
    ll l = 0 , r =  n - 1;
    bool fndL = false , fndR = false;
    for(int i = 0 ; i < n ; i++){
        if(a[i] != b[i] && !fndL) l = i + 1;
        if(a[n - i - 1] != b[n - i - 1] && !fndR) r = n - i;
        if(fndL && fndR) break;
    }
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i][0] <= l && v[i][1] >= r){
            cout<<v[i][0]<<" "<<v[i][1]<<endl;
            break;
        }
    }
}

// ----------------------->>> APPROACH 1;

void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i = 0 ; i < n ; i++)cin>>a[i];
    for(int i = 0 ; i < n ; i++)cin>>b[i];
    ll l = -1 , r = -1;
    for(ll i = 0 ; i < n ; i++){
        if(a[i] != b[i]){
            if(l == -1){
                l = i;
            }
            r = i;
        }
    }
    if(l == -1){
        cout<<"1 1"<<endl;
        return;
    }
    ll i = l - 1;
    while(i >= 0 && (b[i] <= b[i + 1])){
        i--;
    }
    l = i + 1;
    ll j = r + 1;
    while(j < n && b[j] >= b[j - 1]){
        j++;
    }
    r = j - 1;
    cout<< l + 1 << " "<<r+1<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
        // solve2();
    }
    return 0;
}