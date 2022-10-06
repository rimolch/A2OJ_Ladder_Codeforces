#include<bits/stdc++.h>
 
#define ll long long int
 
using namespace std;
 
int main(){
   int n,a,b;
   cin>>n>>a>>b;
   cout<<min(n-a,b+1)<<endl;
   return 0;
}
