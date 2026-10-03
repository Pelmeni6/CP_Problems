#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, ans = 0, s = 1e18, t = 1e18;
    cin >> n;
    vector<ll> A(n);
    for (auto &&i : A) cin >> i;
    for (auto &&x : A)
    {
        if (s > t) swap(s, t);
        if (x <= s)
        {
            s = x;
        }
        else if (x <= t)
        {
            t = x;
        }
        else ans++, t = x;
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
