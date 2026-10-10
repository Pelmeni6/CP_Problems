#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, x, y, t, ans = 0;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        ans += t;
    }
    if ((ans + x) % 2 == y % 2) cout << "Alice\n";
    else cout << "Bob\n";
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
