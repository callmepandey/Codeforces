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
  ll tw = 0 , sw = 0 , fw = 0 ,f = 0;
  if(n%3==0){
    tw = n/3;
    f = 1;
  } else if(n%5==0){
    fw = n/5;
    f = 1;
  } else if(n%7==0){
    sw = n/7;
    f = 1;
  }
  if(f) {
    cout<<tw<<" "<<fw<<" "<<sw<<endl;
  } else {
    if(n<=4)
    {
      cout<<-1<<endl;
    } else {
      if(n%3==1)
      {
        sw++;
        n = n - 7;
        tw = n/3;
      } else {
        fw++;
        n = n - 5;
        tw = n/3;
      }
      cout<<tw<<" "<<fw<<" "<<sw<<endl;
    }
  }
  
}
  
  return 0;
}
