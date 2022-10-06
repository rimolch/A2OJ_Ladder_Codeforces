#include<bits/stdc++.h>
#define checkmate return 0;
#define endl '\n'
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int ar[n];
	int total_fingers=0;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		total_fingers+=ar[i];
	}
	int count = 0;
   for(int i=1;i<=5;i++){
   	if((total_fingers+i)%(n+1)!=1){
   		count++;
   	}
   }
   cout<<count<<endl;
   checkmate
}
