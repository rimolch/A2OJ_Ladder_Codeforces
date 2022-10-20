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
     ll n;
     cin>>n;
     while(n--){
         ll x;
         cin>>x;
         ll p = sqrt(x);
         if(p*p!=x){
            cout<<"NO"<<'\n';
         }
         else{
            if(is_prime(p)){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
         }
     }
     return 0;
}
