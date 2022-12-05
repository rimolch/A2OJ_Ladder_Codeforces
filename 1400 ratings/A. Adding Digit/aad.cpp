#include<bits/stdc++.h>

using namespace std;
#define ll                   long long int
#define endl  	             "\n"
#define pb                   push_back
#define f                    first
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

const ll mod = 1e9 + 7;
vector<int>v;
int a[1000001];
int b[1000001];
int start,endi;

int main(){
    fast
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //cout<<bitset<16>(n)<<endl;//deci_to_binary
    //cout<<oct<<n<<endl;//deci_to_oct
    //cout<<hex<<n<<endl;//deci_to_hexa
    int a,b,n,range=10;
    cin>>a>>b>>n;
    bool is_ok(0);
    for(int i=0;i<range;i++){
        if((a*range+i)%b==0){
            a=a*range+i;
            is_ok =1;
            break;
        }
    }
    if(is_ok){
        cout<<a;
        for(int i=0;i<n-1;i++){
            cout<<0;
        }
    }
    else{
        cout<<-1;
    }
    return 0;
}
