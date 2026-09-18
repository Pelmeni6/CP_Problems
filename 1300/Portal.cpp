#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve(){
    ll n, x, y, mn = 1e18, s;
    bool used = false;
    cin >> n >> x >> y;
    vector<ll> A(n), seq;
    deque<ll> block;
    for (auto &&i : A) cin >> i;
    for (int i = 0; i < x; i++) block.push_back(A[i]);
    for (int i = y; i < n; i++) block.push_back(A[i]);
    for (int i = x; i < y; i++)
    {
        if (A[i] < mn) mn = A[i], s = i;
    }
    for (int i = 0; i < y - x; i++)
    {
        if (y - x <= 0) break;
        ll idx = x + (s - x + i) % (y - x);
        seq.push_back(A[idx]);
    }
    while (!block.empty()) {
        if (!used && !seq.empty() && block.front() > seq[0]) {
            for (auto &&i : seq) cout << i << ' ';
            used = true;
        }
        cout << block.front() << ' ';
        block.pop_front();
    }
    if (!used && !seq.empty()) {
        for (auto &&i : seq) cout << i << ' ';
    }
    cout << '\n';
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
