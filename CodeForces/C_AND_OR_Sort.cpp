#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        
        if(s[0]=='1'){
            ll ans=0;
            for(ll i=1;i<n;i++){
                if(s[i]=='0'){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }else{

            ll zeros=0;
            ll ones=0;
            for(ll i=0;i<n;i++){
                if(s[i]=='0'){
                    zeros++;
                }else{
                    ones++;
                }
            }
            ll ans=ones;
            ll czeros=0;
            ll cones=0;
            for(ll i=1;i<n;i++){
                if(s[i-1]=='1'){
                    cones++;
                }else{
                    czeros++;
                }

                ll rzeros=zeros-czeros;
                ans=min(ans,rzeros+cones);
            }
            cout<<ans<<endl;

        }
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
