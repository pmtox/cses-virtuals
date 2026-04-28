#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    unordered_map<char , int> mpp;
    for(char it : s){
        mpp[it]++;
    }
    int cnt = 0;
    string left = "" , right = "" , middle = "" , ttl = "";
    for(auto it : mpp){
        if(it.second % 2 == 1){
            cnt++;
            middle = it.first;
        }
    }
    if(cnt > 1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(char c = 'A' ; c <= 'Z' ; c++){
            int f = mpp[c];
            for(int i = 0 ; i < f / 2 ; i++){
                left += c;
            }
        }
        right = left;
        reverse(right.begin() , right.end());
        ttl = left + middle + right;

        cout<<ttl<<endl;
    }
    return 0;
} 