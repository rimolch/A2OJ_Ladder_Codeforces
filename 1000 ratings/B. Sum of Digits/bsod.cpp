#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int cnt =0;
	while(s.size()!=1){
        int sum=0;
        for(char c:s){
            sum+=(c-'0');
        }
        s=to_string(sum);
        cnt++;
	}
	cout<<cnt;
    return 0;
}
