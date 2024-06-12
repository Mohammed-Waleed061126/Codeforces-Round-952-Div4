#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define imp cout<<"-1"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
// ----------------------------Functions---------------------------- //
ll string_to_num(char c, string word){
  ll val = 0;
  if (c == 'x')
  {
    for (ll i = 0; i < word.size(); i++)
    {
      val *= 10;
      val += word[i]-48;
    }
  }
  else
  {
    val += c-48;
  }
  return val;
}
bool isPrime(ll k)
{
  if (k == 1)
  {
    return false;
  }
  for (ll i = 2; i * i <= k; i++)
  {
    if (k % i == 0)
    {
      return false;
    }
  }
  return true;
}
// ----------------------------------------------------------------- //
void solution(){
  ll x, y, z, k;
  cin >> x >> y >> z >> k;
  ll sum = x+y+z;
  ll res = 0;
  ll mx = max(x, max(y,z));
  ll mn = min(x, min(y,z));
  for (ll i = 1; i <= mx; i++)
  {
    if (k % i == 0)
    {
      ll a = k/i;
      ll h = i;
      for (ll j = 1; j <= sum-(mx+mn); j++)
      {
        if (a % j == 0)
        {
          ll l = a/j;
          if (l <= mn)
          {
            ll w = j;
            ll p = (mx-h+1)*((sum-(mx+mn))-w+1)*(mn-l+1);
            res = max(res,p);
          }
        }
      }
    }
  }
  cout << res << el;
}

int main(){ MW_HY
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int ntimes = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}