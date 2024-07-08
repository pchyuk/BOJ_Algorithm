#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    int count = 1;
    cin >> n;
    while(n!=0){
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << "Case " << count++ << ": Sorting... done!\n";
        cin >> n;
    }
    return 0;
}