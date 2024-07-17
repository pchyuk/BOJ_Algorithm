#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int a[8];
    for(int i=0; i<8; i++){
        cin >> a[i];
        if(a[i]==9){
            cout << "F\n";
            return 0;
        }
    }
    cout << "S\n";
    return 0;
}