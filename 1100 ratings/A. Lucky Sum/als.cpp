#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll l , r;
	cin >> l >> r;
	ll sum = 0;
	queue<ll> q;
	q.push(4);
	q.push(7);
	for(int i=l; i<=r; ){
		if(i<=q.front()){
			sum+=q.front();
			i++;
		}else{
			q.push(q.front()*10+4);
			q.push(q.front()*10+7);
			q.pop();
		}
	}
	cout<<sum<<endl;
    return 0;

}
