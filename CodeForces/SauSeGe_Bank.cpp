#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n,k;
    cin>>n>>k;
    cout<<(2LL*k)+(2LL*((1LL<<(n-k))-1))<<endl;
        
    }
    
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t=1;
    cin >> t; 
 
    while (t--) {
        solve();
    }
 
    return 0;
}
