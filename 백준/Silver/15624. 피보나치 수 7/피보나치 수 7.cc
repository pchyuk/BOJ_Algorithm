#include <iostream>
using namespace std;

long long fibo[1000001];

int main(){
    int n;
    cin >> n;
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i=3; i<=n; i++){
        fibo[i] = (fibo[i-1] + fibo[i-2]) % 1000000007;
    }
    cout << fibo[n] << "\n";
    return 0;
}