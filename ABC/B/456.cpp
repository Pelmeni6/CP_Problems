#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double cnt = 0;
    vector<vector<ll>> A(3, vector<ll> (6));
    set<ll> ex;
    ex.insert(4); ex.insert(5); ex.insert(6);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++) cin >> A[i][j];
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                set<ll> ans;
                ans.insert(A[0][i]); ans.insert(A[1][j]); ans.insert(A[2][k]);
                if (ans == ex) cnt++;
            }
        }
    }
    cout << cnt / 216.0;
    return 0;
}
