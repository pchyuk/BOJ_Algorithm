#include <iostream>
using namespace std;
int max(int a, int b, int c){
    int tmp;
    tmp = a > b ? a : b;
    return tmp > c ? tmp : c;
}
int wine[10001];
int dp[10001];
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> wine[i];
    }

    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];
    dp[3] = max(wine[1] + wine[2], wine[2] + wine[3], wine[1] + wine[3]);
    for(int i=4; i<=n; i++){
        dp[i] = max(dp[i-1], wine[i] + wine[i-1] + dp[i-3], wine[i] + dp[i-2]);
    }
    
    cout << dp[n] << "\n";
    return 0;
}