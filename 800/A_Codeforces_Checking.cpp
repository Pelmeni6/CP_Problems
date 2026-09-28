#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
set<char> check;

void precompute(){
    string s = "codeforces";
    for (auto &&i : s) check.insert(i);
}

void solve(){
    char c;
    cin >> c;
    if (check.count(c)) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    precompute();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
