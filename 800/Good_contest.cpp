#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, ans = 1e18;
    cin >> n;
    vector<ll> A(3);
    for (auto &&i : A)
    {
        cin >> i;
        ans = min(ans, i);
    }
    cout << n - ans << '\n';
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
