#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, x;
    string s;
    cin >> n >> x >> s;
    ll ans = n, one = -1e18;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1') one = i;
        if (i - one <= x)
        {
            ans--;
        }
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
