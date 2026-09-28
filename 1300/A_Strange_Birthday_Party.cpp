#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, m, ans = 0, last = 0;
    cin >> n >> m;
    vector<ll> K(n), C(m);
    for (auto &&i : K) cin >> i;
    for (auto &&i : C) cin >> i;
    sort(K.rbegin(), K.rend());
    for (int i = 0; i < n; i++)
    {
        if (last < m && C[K[i] - 1] > C[last]) ans += C[last], last++;
        else ans += C[K[i] - 1];
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
