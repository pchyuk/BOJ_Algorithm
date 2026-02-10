#include <iostream>
using namespace std;

int main(){
    int a;
    int b[8] = {2,1,2,3,4,5,4,3};
    cin >> a;
    cout << b[a%8] << "\n";
    return 0;
}