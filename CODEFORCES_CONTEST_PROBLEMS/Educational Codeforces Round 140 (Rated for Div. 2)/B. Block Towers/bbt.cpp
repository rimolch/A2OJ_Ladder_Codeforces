#include<bits/stdc++.h>

using namespace std;
#define ll                   long long int
#define endl  	             "\n"
#define pb                   push_back
#define fi                   first
#define s                    second
#define arsort(ar,n)         sort(ar,a+n)
#define dsort(ar,n)          sort(ar,ar+n,greater<>())
#define varsort(v)           sort(v.begin(), v.end());
#define vdsort(v)            sort(v.begin(), v.end(),greater<>())
#define YES                  cout<<"YES\n"
#define NO                   cout<<"NO\n"
#define fast                 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define tc                   int t; cin >> t; while(t--)
#define all(x)               (x.begin(),x.end())
#define MAXFACT              500
const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const ll mod = 1e9 + 7;

int main(){
    fast
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //cout<<bitset<16>(n)<<endl;//deci_to_binary
    //cout<<oct<<n<<endl;//deci_to_oct
    //cout<<hex<<n<<endl;//deci_to_hexa
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin()+1,v.end());
        int first=v[0];
        ll x=0;
        for(int i=1;i<n;i++){
            if(first<v[i]){
               x= (v[i]-first+1)/2;
               first+=x;
            }
        }
        cout<<first<<endl;
    }
    return 0;
}
