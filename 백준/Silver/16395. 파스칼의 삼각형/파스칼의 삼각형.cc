#include <iostream>
using namespace std;

int pascal[31][31];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        pascal[i][1] = 1;
        pascal[i][i] = 1;
    }

    for(int i=3; i<=n; i++){
        for(int j=2; j<i; j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }

    cout << pascal[n][k] << "\n";
    return 0;
}