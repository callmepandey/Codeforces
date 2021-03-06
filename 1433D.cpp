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
const int MAXN = (1 << 31) , mod = 998244353;
bool comp(pair <ll , ll> &a, pair<ll , ll>&b){
  if(a.fr==b.fr)
    return a.sc > b.sc;
  else return a.fr < b.fr;
}
ll mult(ll a , ll b ){
  ll ans = 1;
  while(b){
    if(b%2) ans = (ans*a)%mod;
    b = b/2;
    a = (a*a)%mod;
  }
  return ans;
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
  map <ll , vector <ll>> loc;
  ll n;
  cin>>n;
  vector <ll> arr(n);
  for(ll i=0;i<n;i++){
    cin>>arr[i];
    loc[arr[i]].pb(i+1);
  }
  ll m = *max_element(arr.begin(),arr.end()) , mn = *min_element(arr.begin(),arr.end());
  if(m==mn){
    cout<<"NO"<<endl;
  } else {
    ll mx = n , td;
    for(auto x:loc){
      if(mx>x.sc.size()){
        td = x.fr;
        mx = x.sc.size();
      }
    }
    //cout<<td<<" ";
    cout<<"YES"<<endl;
    ll a = loc[td].back() , b;
    for(ll i=0;i<n;i++){
      if(arr[i]!=td){
        cout<<a<<" "<<i+1<<endl;
        b = i + 1;
      }
    }
    loc[td].pop_back();

    while(loc[td].size()){
      cout<<b<<" "<<loc[td].back()<<endl;
      loc[td].pop_back();
    }

  }


}
  return 0;
}
