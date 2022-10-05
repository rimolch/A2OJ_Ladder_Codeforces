#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
int pos[N];
int dis[N];
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(pos[x]!=0){
			if(dis[x]==0){
				dis[x]=i-pos[x];
			}
			else if(i-pos[x]!=dis[x]){
				dis[x]=-1;
			}
		}
		else{
			v.push_back(x);
		}
	  pos[x]=i;
    }
    vector<int>vec;
    for(int i=0;i<v.size();i++){
		if(dis[v[i]]!=-1){
			vec.push_back(v[i]);
		}
    }
    sort(vec.begin(),vec.end());
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" "<<dis[vec[i]]<<endl;
    }
	return 0;
}
