#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll get_zeros(ll x){
    if (x == 0) return 1;
    ll ans = 0;
    while (x % 10 == 0) ans++, x/=10;
    return ans;
}

ll get_dig(ll x){
    if (x == 0) return 1;
    ll ans = 0;
    while (x > 0) ans++, x/=10;
    return ans;
}

void solve(){
    ll n, m, ans = 0;
    cin >> n >> m;
    vector<pair<ll, ll>> A(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        A[i].second = get_dig(x);
        A[i].first = get_zeros(x);
    }
    sort(A.rbegin(), A.rend());
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0) A[i].second -= A[i].first;
        ans += A[i].second;
    }
    if (ans >= m + 1) cout << "Sasha\n";
    else cout << "Anna\n";
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
