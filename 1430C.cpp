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
  ll n;
  cin>>n;
  vector <pair <ll , ll>> arr;
  if(n==2){
    cout<<2<<endl<<1<<" "<<2<<endl;
  } else {
    cout<<2<<endl;
    ll last = n;
    cout<<last<<" "<<last-2<<endl;
    cout<<(last+last-2)/2<<" "<<(last+last-2)/2<<endl;
    last = (last+last-2)/2;
    for(ll i = n-3;i>=1;i--)
    {
      cout<<last<<" "<<i<<endl;
      last--;
    }
  }
  
}
  
  return 0;
}
