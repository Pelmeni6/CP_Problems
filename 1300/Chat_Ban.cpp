#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll k, x;

ll get_sum(ll id){
    ll sum = 0;
    if (id > k)
    {
        sum += k * (k + 1) / 2;
        ll tot = (k - 1) * k / 2;
        sum += tot - (k - 1 - (id - k)) * (k - (id - k)) / 2;
    }
    else sum += id * (id + 1) / 2;
    return sum;
}

void solve(){
    cin >> k >> x;
    ll l = 0, r = 2 * k - 1, ans = 2 * k - 1;
    while (r >= l)
    {
        ll m = l + (r - l) / 2;
        if (get_sum(m) >= x)
        {
            ans = m;
            r = m - 1;
        }
        else l = m + 1;
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
