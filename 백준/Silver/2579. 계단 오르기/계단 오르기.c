#include <stdio.h>
int stair[301];
int best[301];

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int n;

    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &stair[i]);
    }

    best[1] = stair[1];
    best[2] = stair[1] + stair[2];
    for(int i=3; i<=n; i++){
        best[i] = stair[i] + max(best[i-2], best[i-3] + stair[i-1]);
    }

    printf("%d\n", best[n]);
    return 0;
}