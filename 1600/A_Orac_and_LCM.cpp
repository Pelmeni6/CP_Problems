#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll> prime(200200);

void sieve(){
    iota(prime.begin(), prime.end(), 0);
    for (ll i = 2; i <= 200010; i++)
    {
        if (prime[i] == i)
        {
            for (ll j = i * i; j <= 200010; j+=i) {
                if (prime[j] == j) prime[j] = i;
            }
        }
    }
}

ll binpow(ll base, ll exp){
    ll res = 1;
    while (exp)
    {
        if (exp & 1) res *= base;
        base *= base;
        exp /= 2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    ll n, ans = 1;
    cin >> n;
    vector<ll> A(n);
    map<ll, vector<ll>> cnt;
    for (auto &&i : A) cin >> i;
    for (int i = 0; i < n; i++)
    {
        while (A[i] > 1)
        {
            ll p = prime[A[i]], k = 0;
            while (A[i] % p == 0) A[i] /= p, k++;
            cnt[p].push_back(k);
        }
    }
    for (auto &&[p, B] : cnt)
    {
        if (B.size() < n - 1) continue;
        while (B.size() < n) B.push_back(0);
        sort(B.begin(), B.end());
        ans *= binpow(p, B[1]);
    }
    cout << ans;
    return 0;
}
