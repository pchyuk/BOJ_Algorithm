#include <stdio.h>
#include <stdlib.h>
#define MAX 20000001
#define BIG 10000000

int num[MAX];

int main(){
    int n, m, key;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &key);
        num[BIG + key]++;
    }

    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%d", &key);
        printf("%d ", num[BIG + key]);
    }
    printf("\n");
    return 0;
}