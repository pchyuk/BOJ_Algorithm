#include <iostream>
using namespace std;
int tri[501][501];
int dp[501][501];

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin >> tri[i][j];
        }
    }

    dp[0][0] = tri[0][0];
    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0) dp[i][j] = dp[i-1][j] + tri[i][j];
            else if(i==j) dp[i][j] = dp[i-1][j-1] + tri[i][j];
            else dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + tri[i][j];
        }
    }

    int result = 0;
    for(int i=0; i<n; i++){
        result = max(result, dp[n-1][i]);
    }
    
    cout << result << "\n";
    return 0;
}