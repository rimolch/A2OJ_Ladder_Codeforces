#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string a1,a2;
    int i;
    cin>>a1>>a2;
    for(i=0;i<a1.size();i++)
    {
        a1[i]= towlower(a1[i]);
        a2[i]= towlower(a2[i]);
    }
    if(a1==a2)
        cout<<"0"<<endl;
    else
        for(i=0;i<a1.size();i++)
        {
            if(a1[i]<a2[i])
            {
              cout<<"-1"<<endl;
              break;
            }
            if(a2[i]<a1[i])
            {
              cout<<"1"<<endl;
              break;
            }
        }
    return 0;
}
