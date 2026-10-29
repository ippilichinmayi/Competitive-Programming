#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int cnt=1;
	    int ans=0;
	    for(int i=1;i<n;i++){
	        if(cnt==3){
	            ans++;
	            cnt=0;
	        }
	        if(s[i]==s[i-1]){
	            cnt++;
	        }else{
	            cnt=1;
	        }
	    }
	    if(cnt==3){
	        ans++;
	    }
	    cout<<ans<<endl;
	}

}
