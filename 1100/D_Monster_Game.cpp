#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, mx = -1e18;
    cin >> n;
    vector<ll> A(n), B(n), pref(n + 1);
    for (auto &&i : A) cin >> i;
    for (auto &&i : B) cin >> i;
    for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + B[i - 1];
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++)
    {
        ll x = A[i];
        auto it = upper_bound(pref.begin(), pref.end(), n - i);
        ll point = distance(pref.begin(), it) - 1;
        point *= x;
        mx = max(mx, point);
    }
    cout << mx << '\n';
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
