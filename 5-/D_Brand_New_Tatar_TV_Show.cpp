#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n , k;
    cin>>n>>k;
    vector<int>arr(n);
    for (int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int>v , c;
    for (int i = 0 ; i < n ; i++) {
        if (i == 0 || arr[i] != arr[i-1]){
            v.push_back(arr[i]);
            c.push_back(1);
        } else{
            c.back()++;
        }
    }
    int m = v.size();
    vector<bool>B(m , false) , is_good(m , false);
    int r = m - 1 , good_count = 0;
    for (int i = m - 1 ; i >= 0 ; i--) {
        if (i < m - 1) {
            if (is_good[i + 1]){
                good_count++;
            }
            while (r > i && v[r] > v[i] + k) {
                if (is_good[r]){
                    good_count--;
                }
                r--;
            }
        }
        B[i] = (good_count > 0);
        is_good[i] = (!B[i] && (c[i] % 2 == 1));
    }
    bool isok = false;
    for (int i = 0 ; i < m ; i++) {
        if (B[i] || (!B[i] && c[i] % 2 == 0)){
            isok = true;
            break;
        }
    }
    if(isok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main() {
    int t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}