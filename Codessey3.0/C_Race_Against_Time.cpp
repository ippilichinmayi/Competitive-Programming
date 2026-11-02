/*
███████╗███████╗███╗   ██╗██╗████████╗██╗  ██╗
╚══███╔╝██╔════╝████╗  ██║██║╚══██╔══╝██║  ██║
  ███╔╝ █████╗  ██╔██╗ ██║██║   ██║   ███████║
 ███╔╝  ██╔══╝  ██║╚██╗██║██║   ██║   ██╔══██║
███████╗███████╗██║ ╚████║██║   ██║   ██║  ██║
╚══════╝╚══════╝╚═╝  ╚═══╝╚═╝   ╚═╝   ╚═╝  ╚═╝
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(v) (v).begin(),(v).end()
#define gcd(a,b) __gcd(a, b)
#define lcm(a,b) ((a)/gcd(a,b)*(b))
#define MAX(v) (*max_element(all(v)))
#define MIN(v) (*min_element(all(v)))
const ll MOD=1e9+7;

ll binpow(ll a, ll b, ll mod=MOD) {
    ll res=1;
    a%=mod;
    while(b>0) {
        if(b&1) res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}

ll modinv(ll a, ll mod=MOD) {
    return binpow(a,mod-2,mod);
}

void zenith() {
    ll n,d;
    cin>>n>>d;
    if(n>=d){
        cout<<"YES"<<endl;
    }else{
        ll l=1;
        ll h=n-1;
        ll mid=l+(h-l)/2;
        while(l<=h){
            mid=l+(h-l)/2;
            ll ans= mid+((d+mid)/(mid+1));
            if(ans>n){
                l=mid+1;
            }else{
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) {
        zenith();
    }
    return 0;
}
