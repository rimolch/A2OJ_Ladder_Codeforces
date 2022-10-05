#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string s;
    int i;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
         s[0]=towupper(s[0]);
    }
    cout<<s<<endl;
    return 0;
}
