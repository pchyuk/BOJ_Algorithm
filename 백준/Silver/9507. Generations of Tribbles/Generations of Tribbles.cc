#include <iostream>
using namespace std;
long long fib[70];
long long koong(int n){
    fib[0] = 1;
    fib[1] = 1; 
    fib[2] = 2;
    fib[3] = 4;
    for(int i=4; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2] + fib[i-3] + fib[i-4];
    }
    return fib[n];
}

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t, n;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        cout << koong(n) << "\n";
    }
}