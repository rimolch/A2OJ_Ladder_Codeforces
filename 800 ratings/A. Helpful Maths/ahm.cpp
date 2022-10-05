#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string s;
    int i,j;
    cin>>s;
    for(i=0;i<s.size();i+=2)
    {
        for(j=i+2;j<s.size();j+=2)
        {
            if(s[i]>s[j])
            {
                swap(s[i],s[j]);
            }
           /* else
            {
                swap(s[j],s[i]);
            }*/
        }
    }
    cout<<s<<endl;
    return 0;
}
