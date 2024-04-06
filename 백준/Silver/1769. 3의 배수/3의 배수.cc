#include <iostream>
#include <string>
using namespace std;
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    string n;
    int count = 1, sum = 0;
    cin >> n;
    int len = n.length();
    if(len == 1) count--;
    for(int i=0; i<len; i++){
        sum += n[i] - '0';
    }

    while(sum >= 10){
        int t = sum, temp=0;
        while(t>0){
            temp += t%10;
            t /= 10;
        }
        count++;
        sum = temp;
    }

    printf("%d\n", count);
    if(sum % 3 == 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}