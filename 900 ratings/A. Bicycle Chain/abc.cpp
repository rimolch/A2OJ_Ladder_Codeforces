#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int m;
    cin>>m;
    int max_rat=0,c=1;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        for(int j=0;j<n;j++){
            if(x%ar[j]==0){
               int k=x/ar[j] ;
               if(k>max_rat){
                 max_rat=k;
                 c=1;
               }
               else if(k==max_rat){
                 c++;
               }
            break;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
