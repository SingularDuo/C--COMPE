#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
    ll n;
    cin>>n;
    ll res = 0;
    for(ll i = 1; i <= n; i++){
        string s = to_string(i);
        int a = (int)s.size();
        res+=a;
    }
    cout<<res;
}