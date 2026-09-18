#include <bits/stdc++.h>
using namespace std;

using ll = long long;


void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    multiset<ll> s;
    ll sum=0;
    for(ll i=0;i<m-1;i++){
        s.insert(a[i]);
        sum+=a[i];
    }
    ll ans=m*a[m-1]-sum;
    for(ll i=m;i<n;i++){
        s.insert(a[i-1]);
        sum+=a[i-1];
        if (s.size() > m - 1) {
            auto it = prev(s.end());
            sum -=*it;
            s.erase(it);
        }
        ans=max(ans, m*a[i]-sum);

        }

        cout<<ans<<endl;
    }
    
    
    


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
