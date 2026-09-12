#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, s, x, ans = 0;
    cin >> n >> s >> x;
    vector<ll> A(n - 1), pref(n + 1);
    for (int i = 1; i < n; i++)
    {
        cin >> A[i - 1];
        pref[i + 1] = pref[i] + A[i - 1];
    }
    for (int i = 1; i <= s; i++)
    {
        ll l = s, r = n, curr = 0;
        while (r >= l)
        {
            ll m = l + (r - l) / 2;
            ll dist = (pref[m] - pref[i]) + min(pref[s] - pref[i], pref[m] - pref[s]);
            if (dist <= x) l = m + 1, curr = m;
            else r = m - 1;
        }
        if (curr != 0) ans = max(ans, curr - i + 1);
    }
    cout << ans;
    return 0;
}
