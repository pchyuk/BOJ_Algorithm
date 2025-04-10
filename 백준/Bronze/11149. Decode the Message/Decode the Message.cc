#include <iostream>
#include <string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;   
    cin.ignore();

    while(n--) {
        string a;
        getline(cin, a);
        int len = a.length();
        int sum = 0;
        for(int i = 0; i < len; i++) {     
            if(a[i] != ' '){
                sum += a[i] - 'a';
            }
            else {
                if(sum % 27 == 26) cout << " ";
                else cout << (char)(sum % 27 + 'a');
                sum = 0;
            }
        }

        if(sum % 27 == 26) cout << " ";
        else cout << (char)(sum % 27 + 'a');

        cout << "\n";
    }

    return 0;
}