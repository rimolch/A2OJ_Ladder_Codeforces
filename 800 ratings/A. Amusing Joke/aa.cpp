#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
   string s1,s2,s3,add;
   int l1,l2,count=0;
   cin>>s1>>s2>>s3;
   add = s1+s2;
   sort(add.begin(),add.end());
   sort(s3.begin(),s3.end());
   l1 = add.length();
   l2 = s3.length();
   if(l1!=l2)
   {
       cout<<"NO"<<endl;
       return 0;
   }
   else
   {
 
       for(int i=0;i<l2;i++)
       {
         for(int j=i;j<=i;j++)
         {
           if(s3[i]==add[j])
           {
               count++;
               j++;
 
           }
           else
           {
              cout<<"NO"<<endl;
              return 0;
           }
         }
     }
   }
   if(count==l2)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   return 0;
}
