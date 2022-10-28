#include<bits/stdc++.h>
using namespace std;

int a[6][6],b[6];
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=5;i++){
        b[i]=i;
    }
    int ans =-1,temp=0;
    do{
         temp=a[b[1]][b[2]]+a[b[2]][b[1]]+a[b[3]][b[4]]+a[b[4]][b[3]];
         temp+=a[b[2]][b[3]]+a[b[3]][b[2]]+a[b[4]][b[5]]+a[b[5]][b[4]];
         temp+=a[b[3]][b[4]]+a[b[4]][b[3]];
         temp+=a[b[4]][b[5]]+a[b[5]][b[4]];
         if(temp>ans){
            ans=temp;
         }
    }
    while(next_permutation(b,b+6));
    cout<<ans;
    return 0;
}
/*
2nd method
#include<bits/stdc++.h>
using namespace std;
 
int g[6][6];
int n=5;
int main()
{
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < n ; ++j)
            cin >> g[i][j];
    int p[6], pans[6], ans = -1, tmp;
    for(int i = 0 ; i < n ; ++i)
        p[i] = i;
    do
    {
        //01234
        tmp = g[p[0]][p[1]] + g[p[1]][p[0]];
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        //1234
        tmp += g[p[1]][p[2]] + g[p[2]][p[1]];
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        //234
        tmp += g[p[2]][p[3]] + g[p[3]][p[2]];
        //34
        tmp += g[p[3]][p[4]] + g[p[4]][p[3]];
        if(tmp > ans)
        {
            ans = tmp;
          //  for(int i = 0 ; i < n ; ++i)
               // pans[i] = p[i];
        }
    }
    while(next_permutation(p, p+n));
    cout<<ans;
    return 0;
}
*/
