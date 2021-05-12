/**
 * @author      : archit1997
 * created  	: Monday Nov 16, 2020 10:35:15 IST
 * problem    	: XORwice
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define ld long double
#define line cout << "-------------" << endl;
#define F first
#define S second
#define P pair<ll, ll>
#define V vector<ll>
#define VP vector<pair<ll, ll>>
#define VS vector<string>
#define VV vector<vector<ll>>
#define pb push_back
#define pf push_front
#define PQ priority_queue<ll>
#define PQ_G priority_queue<ll, vector<ll>, greater<ll>>
#define mod 1000000007
#define inf 1e18

#define ps(x, y) fixed << setprecision(y) << x
#define w(tt)                                                                  \
  ll tt;                                                                       \
  cin >> tt;                                                                   \
  while (tt--)
#define FL(i, a, b) for (ll i = a; i < b; i++)
#define RFL(i, a, b) for (ll i = a; i >= b; i--)
#define mp(a, b) make_pair({a, b})
#define ma(arr, n, type) type *arr = new type[n]
#define pbds                                                                   \
  tree<int, null_type, less<int>, rb_tree_tag,                                 \
       tree_order_statistics_node_update>

int solve() {

  w(tt) {
    ll a, b;
    cin >> a >> b;
    cout << (a ^ b) << "\n";
  }

  return 0;
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  if (freopen("input.txt", "r", stdin) == 0)
    cerr << "No input file";

  if (freopen("output.txt", "w", stdout) == 0)
    cerr << "No output file";

  solve();

  return 0;
}
