#include<bits/stdc++.h>
#define ll long long int
#define MOD 1073741824
using namespace std;
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     ll n,m,x,y;
     cin>>n>>m;
     set<ll>s;
     vector<ll>v;
     vector<ll>b;
     for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
     }
     for(int i=n-1;i>=0;i--){
        s.insert(v[i]);
        v[i]=s.size();
     }
     for(int i=0;i<m;i++){
         cin>>y;
         cout<<v[y-1]<<endl;
     }
     return 0;
}
