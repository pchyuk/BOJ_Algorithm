#include <stdio.h>
int fibo[41];
void fibonacci(int n){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i=2; i<=n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

int main(){
    int t;
    int n;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &n);
        fibonacci(n);
        if(n==0) printf("1 0\n");
        else printf("%d %d\n", fibo[n-1], fibo[n]);
    }
    return 0;
}