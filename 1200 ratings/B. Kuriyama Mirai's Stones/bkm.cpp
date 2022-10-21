#include<bits/stdc++.h>

using namespace std;
#define ll                   long long int
#define endl  	             "\n"
#define pb                   push_back
#define f                    first
#define s                    s
#define arsort(ar,n)         sort(ar,a+n)
#define dsort(ar,n)          sort(ar,ar+n,greater<>())
#define varsort(v)           sort(v.begin(), v.end());
#define vdsort(v)            sort(v.begin(), v.end(),greater<>())
#define YES                  cout<<"YES\n"
#define NO                   cout<<"NO\n"
#define fast                 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x)               (x.begin(),x.end())
#define MAXFACT              500
/*
const ll mod = 1e9 + 7;
const int inf = 1e9 + 10;
const double pi=acos(-1);
bool sortedAsc(ll arr[],ll n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1])
            return false;
    }
    return true;
}
bool sortedDesc(ll arr[],ll n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1])
            return false;
    }
    return true;
}
bool regularBracketSequence(string s) {
    stack<char> s1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            s1.push('(');
        else {
            if (s1.empty())
                return false;
            else
                s1.pop();
        }
    }
    return s1.empty();
}
void primeFactors(ll num) {
    ll fac = 2;
    while (num > 1) {
        if (num % fac == 0) {
            cout << fac << " ";
            num /= fac;
            ll pow = 1;
            while (num % fac == 0) {
                num /= fac;
                pow++;
            }
            cout << pow << endl;
        }
        else {
            fac++;
        }
    }
}
bool is_perfect_sq(ll d)
{
    double temp = d;
    d = sqrt(d);
    temp = sqrt(temp);
    if (temp == d)
        return true;
    return false;
}
int count_Ones_In_Bin(ll n) {
    int cnt = 0;
    while (n) {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}
ll gcd(ll a,ll b){
    return __gcd(a,b);
}
ll lcm(ll a, ll b)
{
    return (a*b)/(__gcd(a,b));
}
bool is_palindrome(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1])
            return false;
    }
    return true;
}
bool is_unique(ll x) {
    int size = log10(x) + 1;
    set<int> s;
    while (x > 0) {
        s.insert(x % 10);
        x /= 10;
    }
    if (s.size() == size)
        return true;
    else
        return false;
}
bool is_vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
        return true;
    else
        return false;
}
int number_of_divisors_d[1000010];
ll number_of_divisors(ll n){
    for(int i=1;i<=1000000;i++){
        for(int j=i;j<=1000000;j+=i){
            number_of_divisors_d[j]++;
        }
     }
     return number_of_divisors_d[n];
}
bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int multiply(int x, int res[], int res_size);
int multiply(int x, int res[], int res_size);
void factorial(int n)
{
    int res[MAXFACT];

    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
    {
        res_size = multiply(x, res, res_size);
    }
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}

int multiply(int x, int res[], int res_size)//this is for factorial
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
*/
int main(){
    fast
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //cout<<bitset<16>(n)<<endl;//deci_to_binary
    //cout<<oct<<n<<endl;//deci_to_oct
    //cout<<hex<<n<<endl;//deci_to_hexa
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>pref1(n+1),pref2(n+1);
    vector<ll>cheap(n);
    for(int i=0;i<n;i++){
		cin>>v[i];
		cheap[i]=v[i];
    }
    sort(cheap.begin(),cheap.end());
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i++){
		sum1+=v[i];//summing unsorted array
		sum2+=cheap[i];//summing sorted array
		pref1[i]=sum1;//store sum1 in pref1
		pref2[i]=sum2;//store sum2 in pref2
    }
    ll m;
    cin>>m;
    while(m--){
		ll t,l,r;
		cin>>t>>l>>r;
		if(t==1){
			if(l==1){
				cout<<pref1[r-1]<<endl;
			}
			else{
				cout<<pref1[r-1]-pref1[l-2]<<endl;
			}
		}
		else{
			if(l==1){
				cout<<pref2[r-1]<<endl;
			}
			else{
				cout<<pref2[r-1]-pref2[l-2]<<endl;
			}
		}
    }
	return 0;
}
