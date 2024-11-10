#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

using u64 = unsigned long long;

u64 DP[51][26];

u64 F(int n, int h) {
    if (!n) return !h;
    u64& ret = DP[n][h];
    if (ret != u64(-1)) return ret;
    ret = F(n - 1, h + 1);
    if (h) ret += F(n - 1, h - 1);
    return ret;
}

void Sol(int n, int h, u64 k) {
    if (!n) return;
    if (k < F(n - 1, h + 1)) {
        cout << '(';
        Sol(n - 1, h + 1, k);
    }
    else {
        cout << ')';
        Sol(n - 1, h - 1, k - F(n - 1, h + 1));
    }
}

int main() {
    fastio;
    memset(DP, -1, sizeof DP);
    u64 n, k; cin >> n >> k;
    if (k >= F(n, 0)) cout << -1 << '\n';
    else Sol(n, 0, k);
}