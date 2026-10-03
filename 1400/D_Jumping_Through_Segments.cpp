#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool check(const vector<pair<ll, ll>>& A, ll m){
    ll f = 0, s = 0;
    for (auto &&[l, r] : A)
    {
        f = min(r, f + m);
        s = max(l, s - m);
        if (s > f) return false;
    }
    return true;
}

void solve(){
    ll n;
    cin >> n;
    vector<pair<ll, ll>> A(n);
    for (auto &&[l, r] : A) cin >> l >> r;
    ll l = -1, r = 1e9;
    while (r >= l)
    {
        ll m = l + (r - l) / 2;
        if (check(A, m)) r = m - 1;
        else l = m + 1;
    }
    cout << r + 1 << '\n';
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
