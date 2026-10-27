#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t>0) {
        int n, m;
        cin >> n >> m;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    bool found=false;
        sort(a.begin(), a.end());
        int ppl = 0;
        for (int i = 0; i < n; i++) {
            ppl += a[i];
            if ((ppl * (ppl - 1)) / 2 > m) {
                cout << i << endl;
                found=true;
                break;
            }
        }
        if(!found){
            cout<<n<<endl;
        }
        t--;

    }
    return 0;
}
