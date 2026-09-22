#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max(n-a,max(n-b,n-c))<<endl;
    }
    
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
