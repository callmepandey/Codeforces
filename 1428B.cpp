#include <bits/stdc++.h>
#define endl '\n'
#define ALL(V) V.begin(), V.end()
#define L_B lower_bound
#define U_B upper_bound
#define pb push_back
#define ll long long
#define fr first
#define sc second
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i)
using namespace std;
// taskkill /im new.exe /t /f
template<class T, class T1> int chkmin(T &x, const T1 &y) { return x > y ? x = y, 1 : 0; }
template<class T, class T1> int chkmax(T &x, const T1 &y) { return x < y ? x = y, 1 : 0; }
const int MAXN = (1 << 31);
bool comp(pair <ll , ll> &a, pair<ll , ll>&b){
  if(a.fr==b.fr)
    return a.sc > b.sc;
  else return a.fr < b.fr;
}

  


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE 
  freopen("input.txt", "r", stdin); 
   //freopen("error.txt", "w", stderr);
  freopen("output.txt", "w", stdout); 
#endif 
   
 ll T = 1 ;
cin>>T;
for(ll t=0;t<T;t++)
{
 ll n , ans;
 string s;
 cin>>n>>s;
 set <char> a;
 a.insert(s.begin(),s.end());
 if(a.size()==1){
  cout<<n<<endl;
 } else if(a.size()==2){
  ll ans = 0 ;
  for(ll i=0;i<n;i++){
    if(s[i]=='-'){
      ans = n;
    }
  }
  cout<<ans<<endl;
 } else {
  ans = 0 ; ll c = 0;
  ll a[n] = {0};
  for(ll i=0;i<n;i++){
    if(s[i]=='-'){
      a[i] = 1;
      a[(i+1)%n] = 1; 
    }
  }
  for(ll i=0;i<n;i++){
    ans = ans + a[i];
  }
  cout<<ans<<endl;
 }
    
}
  return 0;
}
