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


void zenith() {
        ll x,y,r;
        cin>>x>>y>>r;
        cout<<x<<" "<<y+r<<endl;

    }
    
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t=1;
    cin >> t; 

    while (t--) {
        zenith();
    }

    return 0;
}
