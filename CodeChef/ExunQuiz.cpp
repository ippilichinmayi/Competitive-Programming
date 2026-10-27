#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        if(s%4==0){
            if(s/4>n){
                cout<<-1<<endl;
                continue;
                
            }
            cout<<s/4<<endl;
        }else if(s%4==1){
            if((s+3)/4 +3>n){
                cout<<-1<<endl;
                continue;
                
            }
            cout<<(s+3)/4 +3 <<endl;
        }else if(s%4==2){
            if((s+2)/4 +2>n){
                cout<<-1<<endl;
                continue;
                
            }
            cout<<(s+2)/4 +2 <<endl;
        }else{
            if((s+1)/4 +1>n){
                cout<<-1<<endl;
                continue;
                
            }
            cout<<(s+1)/4 +1 <<endl;
        }
    }
    return 0;
}
