#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int main() {
	// your code goes here
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x2+abs(y1-y2)<<" "<<y2<<endl;
    }
    else if(y1==y2){
        cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2)<<endl;
    }
    else if(abs(x2-x1)==abs(y2-y1)){  //for diagonal
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
	
