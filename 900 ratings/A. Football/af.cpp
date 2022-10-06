#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string str;
    int a=0,b=0,count=0;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            a++;
            b=0;
        }
        else
        {
            b++;
            a=0;
        }
        if(a==7||b==7)
        {
            count = 1;
        }
    }
    if(count==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
