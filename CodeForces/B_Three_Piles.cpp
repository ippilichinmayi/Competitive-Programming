#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a<b){
            if((b-a)>a+c-b){
                cout<<b-a<<"\n";
            }else{
                cout<<abs((c-b)+a)<<"\n";
            }

        }else{
            cout<<(c-b)+a<<"\n";
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
