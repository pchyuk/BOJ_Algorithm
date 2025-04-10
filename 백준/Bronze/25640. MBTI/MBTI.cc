#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string a, b;
    int n, count = 0;
    cin >> a;
    cin >> n;
    while(n--) {
        cin >> b;
        if(a == b) {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}