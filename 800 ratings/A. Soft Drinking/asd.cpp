#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,k,l,c,d,p,n1,n2,r,a,m,b,s,j;
    cin>>n>>k>>l>>c>>d>>p>>n1>>n2;
    a = k*l;
    m = a/n1;
    b = c*d;
    s = p/n2;
    r = min(m,b);
    j = min(r,s);
    cout<<j/n<<endl;
    return 0;
}
