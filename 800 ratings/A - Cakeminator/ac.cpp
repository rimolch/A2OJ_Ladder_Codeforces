#include <iostream>

using namespace std;

int main()
{
   int r,c;
   cin>>r>>c;
   string s;
   int row[11]={0};
   int col[11]={0};
   for(int i=0;i<r;i++){
       cin>>s;
       for(int j=0;j<c;j++){
           if(s[j]=='S'){
              row[i]=1;
              col[j]=1;
           }
       }
   }
   int cl(0);
   for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          if(row[i]==0||col[j]==0){
            cl++;
          }
      }
   }
   cout<<cl;
   return 0;
}
