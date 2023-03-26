#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> c(n + m);
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++) {
        c[n + i] = b[i];
    }

    sort(c.begin(), c.end());

    for (int i = 0; i < n; i++) {
        int idx = lower_bound(c.begin(), c.end(), a[i]) - c.begin() + 1;
        cout << idx << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++) {
        int idx = lower_bound(c.begin(), c.end(), b[i]) - c.begin() + 1;
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}