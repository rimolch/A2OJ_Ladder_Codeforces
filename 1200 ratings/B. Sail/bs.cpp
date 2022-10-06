#include<iostream>
using namespace std;
int main()
{
    int t,a,b,x,y;
    cin>>t>>a>>b>>x>>y;
    for(int i=1;i<=t;i++){
        char ch;
        cin>>ch;
        if(ch=='E'&& a<x){
            a++;
        }
        else if(ch=='W'&& a>x){
            a--;
        }
        else if(ch=='N'&& b<y){
            b++;
        }
        else if(ch=='S' && b>y){
            b--;
        }
        if(a==x && b==y){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}
