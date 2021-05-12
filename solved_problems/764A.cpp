/*Comrade Dujikov is busy choosing artists for Timofey's birthday and is
recieving calls from Taymyr from Ilia-alpinist.

Ilia-alpinist calls every n minutes, i.e. in minutes n, 2n, 3n and so on.
Artists come to the comrade every m minutes, i.e. in minutes m, 2m, 3m and so
on. The day is z minutes long, i.e. the day consists of minutes 1, 2, ..., z.
How many artists should be killed so that there are no artists in the room when
Ilia calls? Consider that a call and a talk with an artist take exactly one
minute. Input

The only string contains three integers — n, m and z (1 ≤ n, m, z ≤ 104).
Output

Print single integer — the minimum number of artists that should be killed so
that there are no artists in the room when Ilia calls. Examples Input Copy

1 1 10

Output
Copy

10

Input
Copy

1 2 5

Output
Copy

2

Input
Copy

2 3 9

Output
Copy

1

Note

Taymyr is a place in the north of Russia.

In the first test the artists come each minute, as well as the calls, so we need
to kill all of them.

In the second test we need to kill artists which come on the second and the
fourth minutes.

In the third test — only the artist which comes on the sixth minute.
*/

// Chochu Singh
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define line cout << "-------------" << endl;
#define F first
#define S second

int main() {
  // Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, m, z;
  cin >> n >> m >> z;

  vector<ll> v(z + 1, 0);
  ll rep = n;
  while (rep <= z) {
    v[rep] = 1;
    rep += n;
  }

  rep = m;
  ll ans = 0;

  while (rep <= z) {
    if (v[rep] == 1)
      ans++;

    rep += m;
  }

  cout << ans << endl;

  return 0;
}
