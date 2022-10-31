#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool is_ok =0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x!=y){
            is_ok =1;
        }
    }
    if(is_ok)cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
    return 0;

}
