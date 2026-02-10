#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    if(m>k) cout << n-(m-k) << "\n";
    else cout << n-(k-m) << "\n";
    return 0;
}