#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int year,a,b,c,d;
    cin>>year;
    while(true)
    {
        year+=1;
        a = year/1000;
        b = year/100%10;
        c = year/10%10;
        d = year%10;
        if(a!=b&&a!=c&&a!=d&&b!=d&&b!=c&&c!=d)
        {
            cout<<year;
            return 0;
        }
    }
 
    return 0;
}
