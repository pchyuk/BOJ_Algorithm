#include <iostream>
using namespace std;

int candy[1000];

int main() {
    int n, sum = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> candy[i];
        sum += candy[i];
    }
    sum /= 2;
    for(int i=0; i<n-1; i++){
        int tmp = 0;
        for(int j=1; j<n; j+=2){
            tmp += candy[(i+j)%n];
        }
        cout << sum - tmp << "\n";
    }
    int tmp = 0;
    for(int i=0; i<n-1; i+=2){
        tmp += candy[i%n];
    }
    cout << sum - tmp << "\n";
    return 0;
}