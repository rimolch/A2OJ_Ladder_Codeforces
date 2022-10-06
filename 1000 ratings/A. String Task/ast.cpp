#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
   string str,s;
   int i;
   cin>>str;
   for(i=0;i<str.size();i++)
   {
     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'|| str[i]=='y'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'|| str[i]=='Y')
     {
        continue;
     }
     else
     {
         s+= '.';
         s+= towlower(str[i]);
     }
   }
   cout<<s<<endl;
    return 0;
}
