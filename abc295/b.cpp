#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    int R, C;
    cin >> R >> C;

    vector<string> B(R);
    for (string &s : B)
        cin >> s;

    vector<vector<bool>> blasted(R, vector<bool>(C));
    rep(i, R) {
        rep(j, C) {
            if (!isdigit(B[i][j])) continue;
            int power = B[i][j] - '0';
            rep(ni, R) {
                rep(nj, C) {
                    if (abs(i - ni) + abs(j - nj) <= power) blasted[ni][nj] = true;
                }
            }
        }
    }

    rep(i, R) {
        rep(j, C) {
            if (blasted[i][j]) B[i][j] = '.';
        }
    }
    for (string &s : B)
        cout << s << '\n';
}