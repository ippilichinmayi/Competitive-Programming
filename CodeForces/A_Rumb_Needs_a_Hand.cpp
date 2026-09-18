#include <bits/stdc++.h>
using namespace std;

using ll = long long;


void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> t;
    vector<int> s;
    for(int i=0;i<n;i++){
        if(a[i]!=i+1){
            t.push_back(a[i]);
            s.push_back(a[i]);
        }
    }
    reverse(t.begin(),t.end());
    sort(s.begin(),s.end());
    if(t==s){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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
