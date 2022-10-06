#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define checkmate return 0;
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>ar(7);
    for(int i=0;i<7;i++)cin>>ar[i];
    int i=0;
    while(1){
      n-=ar[i];
      if(n<=0)break;
      i++;
      i%=7;
    }
    cout<<i+1<<endl;
    checkmate
}
