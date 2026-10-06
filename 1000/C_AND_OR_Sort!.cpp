#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, ans = 1e18, one = 0, zero = 0;
    string s;
    cin >> n >> s;
    for (auto &&i : s)
    {
        if (i == '0') zero++;
    }
    if (s[0] == '1') {
        cout << zero << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1') one++;
        else zero--;
        ans = min(ans, one + zero);
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
