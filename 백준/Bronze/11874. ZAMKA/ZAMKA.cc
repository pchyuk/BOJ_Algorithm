#include <iostream>
using namespace std;

int getSum(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int l,d,x;
    cin >> l >> d >> x;
    for(int i=l; i<=d; i++){    
        if(getSum(i)==x){
            cout << i << "\n";
            break;
        }
    }
    for(int i=d; i>=l; i--){
        if(getSum(i)==x){
            cout << i << "\n";
            break;
        }
    }
    return 0;
}