#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, k, ans = 1e18;
    cin >> n >> k;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0 && i <= k) ans = min(n / i, ans);
        if (n % i == 0 && n / i <= k) ans = min(i, ans);
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
