#include<bits/stdc++.h>
#define ll long long int
#define MOD 1073741824
using namespace std;
int number_of_divisors_d[1000010],a,b,c,sum;
int main() {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int n;
     cin>>n;
     for(int i=1;i<=1000000;i++){
        for(int j=i;j<=1000000;j+=i){
            number_of_divisors_d[j]++;
        }
     }
     cout<< number_of_divisors_d[n];
     return 0;
}
