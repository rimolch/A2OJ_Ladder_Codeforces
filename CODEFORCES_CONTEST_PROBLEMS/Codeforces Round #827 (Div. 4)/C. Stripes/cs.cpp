#include <bits/stdc++.h>
#define MOD 1073741824
#define ll long long int
#define endl '\n'
using namespace std;
 
int main(){
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     int t;
     cin>>t;
     while(t--){
        string ch[8];
        for(int i=0;i<8;i++){
           cin>>ch[i];
        }
        int r,b,is_ok=0;
        for(int i=0;i<8;i++){
               r =0;
          for(int j=0;j<8;j++){
               if(ch[i][j]=='R'){
                    r++;
               }
          }
          if(r==8){
            cout<<"R"<<endl;
             is_ok =1;
             break;
          }
       }
       if(!is_ok){
          for(int i=0;i<8;i++){
               b=0;
               for(int j=0;j<8;j++){
                    if(ch[j][i]=='B'){
                         b++;
                    }
               }
             if(b==8){
               cout<<"B"<<endl;
               break;
             }
          }
       }
     }
     return 0;
}
