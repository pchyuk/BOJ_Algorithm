#include <stdio.h>
int main(){
    int x;
    int count = 0;
    int floor = 1;
    int order;
    int a, b;
    scanf("%d", &x);

    while(1){
        count += floor;
        if(x <= count) break;
        floor++;
    }

    order = x - (count - floor);
    a = floor;
    b = 1;

    for(int i=1; i<order; i++){
        a--;
        b++;
    }

    if(floor % 2 == 0){
        printf("%d/%d\n", b, a);
    }
    else {
        printf("%d/%d\n", a, b);
    }
    return 0;
}