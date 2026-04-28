#include<bits/stdc++.h>
using namespace std;
typedef long long llkkkkkkkkkkkkkkkkkkkkkkkkkk;
void solve(){
    llkkkkkkkkkkkkkkkkkkkkkkkkkk n;cin>>n;
    vector<llkkkkkkkkkkkkkkkkkkkkkkkkkk>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    llkkkkkkkkkkkkkkkkkkkkkkkkkk asssssssssssssaaaaaaaaaaaaaaaaaaaaaaaaa = 0;
    for(llkkkkkkkkkkkkkkkkkkkkkkkkkk lllllllllllllllllllllll = 0 ; lllllllllllllllllllllll < n-1 ; lllllllllllllllllllllll++){
        llkkkkkkkkkkkkkkkkkkkkkkkkkk maaaxiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii = abs(arr[lllllllllllllllllllllll] - arr[lllllllllllllllllllllll + 1]);
        llkkkkkkkkkkkkkkkkkkkkkkkkkk miiniiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii = __gcd(arr[lllllllllllllllllllllll] , arr[lllllllllllllllllllllll + 1]);
        if(maaaxiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii ==  miiniiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii){
            asssssssssssssaaaaaaaaaaaaaaaaaaaaaaaaa++;
        }
    }
    cout<<asssssssssssssaaaaaaaaaaaaaaaaaaaaaaaaa<<endl;
}
int main(){
    llkkkkkkkkkkkkkkkkkkkkkkkkkk t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}