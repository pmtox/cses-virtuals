#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
bool isok(vector<int> &arr , int n  , vector<int>&a  , vector<int>&b){
    bool isook = false;
    for(int i = 0 ; i < n - 2 ; i++){
        if(a[i] >= 0 && arr[i + 1] >= b[i]){
            isook = true;
            break;
        }
    }
    return isook;
}
void solve(){
    int n;cin>>n;
    vector<int>a(n + 1 , 0) , b(n + 1 , 0);
    for(int i = 0 ; i < n ; i++){
        int x;cin>>x;
        if(i){
            a[i] = a[i - 1];
            b[i] = b[i - 1];
        }
        if(x == 1){
            a[i]++;
            b[i]++;
        }
        else if(x == 2){
            a[i]--;
            b[i]++;
        }
        else{
            a[i]--;
            b[i]--;
        }
    }
    vector<int>arr(n + 2 , INT_MIN);
    arr[n - 2] = b[n - 2];
    for(int i = n - 3 ; i >= 0 ; i--){
        arr[i] = max(b[i] , arr[i+1]);
    }
    if(isok(arr , n , a , b)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}