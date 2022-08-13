#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int r=-n;r<=n;r++){
        int top=n-abs(r);
        for(int i=0;i<abs(r);i++){
            cout<<"  ";
        }
        for(int i=0;i<top;i++){
            cout<<i<<" ";
        }
        for(int i=top;i>0;i--){
            cout<<i<<" ";
        }
        cout<<0<<endl;
    }
    return 0;
}
