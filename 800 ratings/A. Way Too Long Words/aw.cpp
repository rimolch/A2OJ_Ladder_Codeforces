#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string abbr;
    int len,count,i,n;
    cin>>n;
    while(n--)
    {
        cin>>abbr;
        len = abbr.size();
        count = 0;
      if(len<=10)
      {
          cout<<abbr<<endl;
      }
      else
      {
          for(i=1;i<len-1;i++)
          {
              count+=1;
          }
        cout<<abbr[0]<<count<<abbr[len-1]<<endl;
      }
    }
    return 0;
}
