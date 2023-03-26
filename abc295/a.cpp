#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    bool found = false;
    rep(i, N) {
        string w;
        cin >> w;
        if (w == "and" || w == "not" || w == "that" || w == "the" || w == "you") { found = true; }
    }
    cout << (found ? "Yes" : "No") << endl;
    return 0;
}