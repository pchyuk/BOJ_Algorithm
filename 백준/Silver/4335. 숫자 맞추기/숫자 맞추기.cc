#include <iostream>
#include <string>
using namespace std;

int L = 0, R = 11;
int x; string s;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (cin >> x >> s >> s) {
		if (s[0] == 'h') R = min(R, x);
		else if (s[0] == 'l') L = max(L, x);
		else {
			if (L < x && x < R) cout << "Stan may be honest\n";
			else cout << "Stan is dishonest\n";
			L = 0, R = 11;
		}
	}
}