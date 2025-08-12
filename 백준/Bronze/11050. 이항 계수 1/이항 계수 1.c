#include <stdio.h>
int fact(int n){
    int sum = 1;
    if(n==0) return 1;
    else {
        for(int i=1; i<=n; i++){
            sum *= i;
        }
    }
    return sum;
}

int main(){
    int n, k;
    int c;

    scanf("%d %d", &n, &k);
    c = fact(n) / (fact(n-k) * fact(k));

    printf("%d\n", c);
    return 0;
}