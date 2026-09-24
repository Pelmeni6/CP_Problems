#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, k, ans = -1e18, temp = 0;
    cin >> n;
    vector<pair<ll, ll>> A(n);
    for (int i = 0; i < n; i++)
    {
        ll x, curr = -1e18;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> x;
            curr = max(x - j, curr);
        }
        A[i] = {curr, k};
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++)
    {
        ans = max(A[i].first - temp, ans);
        temp += A[i].second;
    }
    cout << ans + 1 << '\n';
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
