#include <iostream>
#include <algorithm>
using namespace std;

int p[10] = {0, 1, 2, 2, 3, 3, 3, 3, 4, 4};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    long long n, k, x;
    cin >> n >> k >> x;

    long long ans = (n+1-p[x]) - 3 * (k-1);
    if (x == 4 || x == 8 || x == 9) ans++;

    cout << ans;
}