#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, start, end, count = 0;
    int num[1000000] = {0};
    scanf("%d", &n);

    start = 1;
    end = count = n;

    for(int i=1; i<=n; i++){
        num[i] = i;
    }

    if(n == 1){
        printf("1\n");
        return 0;
    }

    else if(n == 2){
        printf("2\n");
        return 0;
    }

    while(count > 1){
        num[start] = 0;
        start++;
        end++;
        count--;
        num[end] = num[start];
        num[start] = 0;
        start++;
    }

    printf("%d\n", num[start]);
    return 0;
}