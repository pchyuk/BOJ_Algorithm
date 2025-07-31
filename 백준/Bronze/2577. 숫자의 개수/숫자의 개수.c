#include <stdio.h>
int main(){
    int a,b,c;
    int sum;
    int cnt[10] = {0,};

    int num;

    scanf("%d %d %d", &a, &b, &c);
    sum = a*b*c;

    while(sum>0){
        num = sum % 10;
        cnt[num]++;
        sum /= 10;
    }

    for(int i=0; i<10; i++){
        printf("%d\n", cnt[i]);
    }
    return 0;
}