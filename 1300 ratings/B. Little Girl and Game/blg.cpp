#include<bits/stdc++.h>
using namespace std;

const int N=1e5;
int pos[N];
int dis[N];
/*
bool is_Palindrome(string S)
{
    for (int i = 0; i < S.length() / 2; i++){
        if (S[i] != S[S.length() - i - 1]) {
            return false;
        }
    }
    return true;
}
*/
int main(){
    string s;
    cin>>s;
    map<char,int>mp;
    for(char i:s){
        mp[i]++;
    }
    int c=0;
    for(auto it:mp){
        if(it.second%2==1){
            c++;
        }
    }
    if(c%2||c==0){
       cout<<"First"<<endl; 
    }
    else{
        cout<<"Second"<<endl;
    }
    return 0;
}
