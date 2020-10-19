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
ll arr[200002] , res[200002];



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
  ll n;
  cin>>n;
  char s[n][n];
  for(ll i=0;i<n;i++){
    for(ll j = 0;j<n;j++){
      cin>>s[i][j];
    }
  }
  vector <pair <ll , ll>> ans;
  ll f1 , f2 , fn , fn1;
  f1 = (s[0][1]=='1');
  f2 = (s[1][0]=='1');
  fn = (s[n-1][n-2]=='1');
  fn1 = (s[n-2][n-1]=='1');
  if(f1==f2&&fn==f1&&fn1==f1){
    ans.pb({n,n-1});
    ans.pb({n-1,n});
  } else if(f1==f2||fn==fn1){
    if(f1==f2){
      if(fn==f1){
        ans.pb({n,n-1});
      } else if(fn1==f1){
        ans.pb({n-1,n});
      }
    } else if(fn==fn1){
      if(f1==fn){
        ans.pb({1,2});
      } else if(f2==fn){
        ans.pb({2,1});
      }
    }
  } else {
    if(f1==fn){
      ans.pb({1,2});
      ans.pb({n-1,n});
    } else if(f1==fn1){
      ans.pb({1,2});
      ans.pb({n,n-1});
    }
  }
  cout<<ans.size()<<endl;
  for(auto x:ans) cout<<x.fr<<" "<<x.sc<<endl;
}
 

  return 0;
}
