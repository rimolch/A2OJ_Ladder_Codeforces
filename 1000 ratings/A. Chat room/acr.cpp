#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int i,j=0,count=0;
    string s,word;
    word = "hello";
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==word[j])
        {
            j++;
            count++;
        }
    }
    if(count==5)
    {
        cout<<"YES";
    }
    else
    {
       cout<<"NO";
    }
    return 0;
}
