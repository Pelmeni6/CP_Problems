#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, one = -1e18, two = -1e18, three = -1e18;
    cin >> n;
    vector<ll> A(n);
    for (auto &&i : A) cin >> i;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > one) {
            three = two;
            two = one;
            one = A[i];
        }  else if (A[i] > two) {
            three = two;
            two = A[i];
        } else if (A[i] > three) {
            three = A[i];
        }
        if (i >= 2) {
            cout << three << '\n';
        }
    }
    
    return 0;
}
