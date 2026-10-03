#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll a, b, c, ans;
    cin >> a >> b >> c;
    if (a >= b) cout << (a + c) - b << '\n';
    else cout << max({abs(b - a), abs((a + c) - b)}) << '\n';
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
