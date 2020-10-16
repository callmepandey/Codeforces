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
const int MAXN = (1 << 20);
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
  string s;
  ll n , c = 0 , ans = 0 ;
  vector <ll> arr;
  cin>>n;
  cin>>s;
  for(ll i = 0;i<n-1;i++)
  {
    if(s[i]==s[i+1])
    {
      c++;
    } else {
      arr.pb(c+1);
      c = 0;
    }
  }
  arr.pb(c+1);
 // cout<<arr.size()<<endl;
  ll available = 0;
  for(auto x: arr){
    available = available + x - 1;
  }
  ll used = 0 , waste = 0;
  for(ll i = 0;i<arr.size();i++){
    if(used+waste==available){
      ans++;
      i++;
    } else {
      used++;
      ans++;
      used = used - min(arr[i]-1,used);
      waste = waste + arr[i] - 1;
    }
  }
  cout<<ans<<endl;
}
  
  return 0;
}
