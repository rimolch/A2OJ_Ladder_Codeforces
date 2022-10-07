#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int cnt[8]={0};
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		cnt[a]++;
	}
	if(cnt[5]==0&&cnt[7]==0 && cnt[2]>=cnt[4]&&cnt[1]==cnt[4]+cnt[6]&&cnt[2]+cnt[3]==cnt[4]+cnt[6]){
		for(int i=0;i<cnt[4];i++){
			cout<<"1 2 4"<<endl;
		}
		cnt[2]-=cnt[4];
		for(int i=0;i<cnt[2];i++){
			cout<<"1 2 6"<<endl;
		}
		for(int i=0;i<cnt[3];i++){
			cout<<"1 3 6"<<endl;
		}
	}
	else{
		cout<<-1<<endl;
	}
	return 0;
}
