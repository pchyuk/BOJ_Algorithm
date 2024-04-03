#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);

    int* sugar = (int*)calloc(n+1, sizeof(int));

    sugar[0] = sugar[1] = sugar[2] = -1;
    sugar[3] = 1;
    sugar[4] = -1;
    sugar[5] = 1;

    for(int i=6; i<=n; i++){
        if(sugar[i-5] != -1){
            sugar[i] = sugar[i-5] + 1;
        }
        else if(sugar[i-3] != -1){
            sugar[i] = sugar[i-3] + 1;
        }
        else sugar[i] = -1;
    }

    printf("%d\n", sugar[n]);
    free(sugar);
    return 0;
}