#include <stdio.h>
int main(){
    int n, v;
    int count = 0;

    scanf("%d", &n);
    int num[n];

    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    scanf("%d", &v);
    for(int i=0; i<n; i++){
        if(num[i] == v) count++;
    }

    printf("%d\n", count);
    return 0;
}