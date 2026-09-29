#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool check(const vector<ll>& A, ll k, ll h){
    ll x = 0;
    vector<ll> B(A.begin(), A.begin() + k);
    sort(B.rbegin(), B.rend());
    for (int i = 0; i < k; i+=2) x += B[i];
    return x <= h;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, h;
    cin >> n >> h;
    vector<ll> A(n);
    for (auto &&i : A) cin >> i;
    ll l = 0, r = n, ans = 1;
    while (r >= l)
    {
        ll m = l + (r - l) / 2;
        if (check(A, m, h)) ans = m, l = m + 1;
        else r = m - 1;
    }
    cout << ans;
    return 0;
}
