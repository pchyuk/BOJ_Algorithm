#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    string A, B;
    cin >> A >> B;
    int len_A = A.length();
    int len_B = B.length();
    int diff = len_A;

    for(int i=0; i<=len_B-len_A; i++){
        int tmp = 0;
        for(int j=i; j<i+len_A; j++){
            if(A[j-i] != B[j]) tmp++;
        }
        if(tmp < diff) diff = tmp;
    }

    cout << diff << "\n";
    return 0;
}