#include<iostream>
using namespace std;
 
int main() {
	// your code goes here
     int t;
     cin>>t;
     while(t--){
         long long int  n;
          cin>>n;
         long long int x;
         long long int l =0,c=0;
         for(int i =0;i<n;i++){
             cin>>x;
             if(x>l) {
                 l++;
                 c+=l;
             }
             else{
                 l=x;
                 c+=x;
             }
         }
         cout<<c<<endl;
     }
	return 0;
}
