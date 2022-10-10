#include <bits/stdc++.h>
#define MOD 1e7
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int ar[1005]={0};
    int is_ok =0;
    int i;
    for(i=0;i<n;i++){
          int a;
          cin>>a;
          ar[a]++;
          if(ar[a]>(n+1)/2){
              break;
          }
    }
    puts(i==n?"YES":"NO");
    return 0;
}
