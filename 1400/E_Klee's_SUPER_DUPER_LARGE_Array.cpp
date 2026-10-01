#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n, k;

ll get(ll x){
    __int128 plus = (__int128)x * (2 * k + x - 1) / 2;
    __int128 minus = (__int128)(n - x) * (2 * k + n + x - 1) / 2;
    return (ll)(plus - minus);
}

void solve(){
    cin >> n >> k;
    ll l = 1, r = n, ans = 2e18;
    while (r >= l)
    {
        ll m = l + (r - l) / 2, d = get(m);
        ans = min(ans, abs(d));
        if (d < 0) l = m + 1;
        else r = m - 1;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
