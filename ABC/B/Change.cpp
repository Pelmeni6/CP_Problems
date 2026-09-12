#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, one = 0, ten = 0, hund = 0;
    cin >> n;
    vector<ll> A(n);
    for (auto &&i : A) cin >> i;
    for (auto &&i : A)
    {
        if (i % 10 != 0) one += 10 - i % 10;
        if (i % 100 != 0) ten += (100 - i % 100) / 10;
        if (i % 1000 != 0) hund += (1000 - i % 1000) / 100;
    }
    cout << one << ' ' << ten << ' ' << hund;
    return 0;
}
