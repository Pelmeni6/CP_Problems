#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, p = 1;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            p = i;
            break;
        }
    }
    if (p == 1) p = n;
    cout << n / p << ' ' << n - n / p << '\n';
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
