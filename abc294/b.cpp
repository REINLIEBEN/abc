#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < h; i++) {
        string s;
        for (int j = 0; j < w; j++) {
            if (a[i][j] == 0) {
                s += '.';
            } else {
                s += static_cast<char>(a[i][j] - 1 + 'A');
            }
        }
        cout << s << endl;
    }
    return 0;
}