#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int N;
    cin >> N;
    map<int, int> mp;
    rep(i, N) {
        int a;
        cin >> a;
        ++mp[a];
    }

    int ans = 0;
    for (auto [_, cnt] : mp)
        ans += cnt / 2;
    cout << ans << endl;
}