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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        stack<int> a;
        set<int> print;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                a.push(i+1);
            }else if(s[i]=='2'){
                if(!a.empty()){
                    int k=a.top();
                    a.pop();
                    print.insert(k);
                }else{
                    print.insert(i+1);
                }
            }else{
                print.insert(i+1);
            }
        }
        cout<<n-print.size()<<endl;
        for(int i=1;i<=n;i++){
            if(print.find(i) == print.end()){
                cout <<i<<" ";
            }
        }
        cout << '\n';

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
