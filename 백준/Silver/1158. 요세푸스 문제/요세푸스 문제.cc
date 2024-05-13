#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    int jump = k;

    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }

    cout << "<";
    k--;
    
    for(int i=0; i<n-1; i++){
        cout << arr[k%n] << ", ";
        arr[k%n] = 0;
        int count = 0;
        while(count < jump){
            if(arr[++k%n] != 0) count++;
        }
    }
    cout << arr[k%n] << ">\n";
    return 0;
}