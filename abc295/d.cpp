#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    string S;
    cin >> S;
    int n = S.size();
    vector<vector<int>> x(n + 1, vector<int>(10));
    rep(i, n) {
        int c = S[i] - '0';
        x[i + 1] = x[i];
        x[i + 1][c] ^= 1;
    }
    map<vector<int>, int> mp;
    rep(i, n + 1) mp[x[i]]++;

    ll ans = 0;
    for (auto p : mp) {
        ll n = p.second;
        ans += n * (n - 1) / 2;
    }
    cout << ans << endl;

    return 0;
}