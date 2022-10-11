#include <bits/stdc++.h>
#define MOD 1e7
#define ll long long int
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int a0=0,a1=0,b0=0,b1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                a0++;
            }
            else{
                a1++;
            }
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==0){
                b0++;
            }
            else{
                b1++;
            }
        }
        int c=0,mini=0;
        bool is_ok =0;
        if(a1==b1 && a0 == b0){
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    is_ok =1;
                    break;
                }
            }
            if(is_ok)cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    c++;
                }
            }
            mini = min(abs(a1-b1)+1,c);
            cout<<mini<<endl;
        }
    }
	return 0;
}
