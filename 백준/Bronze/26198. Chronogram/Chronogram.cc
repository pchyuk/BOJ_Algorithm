#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();
    int sum[n] = {0};
    for(int i=0; i<n; i++){
        string arr;
        getline(cin, arr);
        int len = arr.length();
        for(int k=0; k<len; k++){
            if(arr[k] == 'I') sum[i] += 1;
            else if(arr[k] == 'V') sum[i] += 5;
            else if(arr[k] == 'X') sum[i] += 10;
            else if(arr[k] == 'L') sum[i] += 50;
            else if(arr[k] == 'C') sum[i] += 100;
            else if(arr[k] == 'D') sum[i] += 500;
            else if(arr[k] == 'M') sum[i] += 1000;
        }
    }
    for(int i=0; i<n; i++){
        cout << sum[i] << "\n";
    }
    return 0;
}