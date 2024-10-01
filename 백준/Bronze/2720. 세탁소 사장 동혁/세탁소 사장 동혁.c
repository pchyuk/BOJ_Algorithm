#include <stdio.h>
int main(){
    int n;
    int money;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int quarter = 0, dime = 0, nickel = 0, penny = 0;
        scanf("%d", &money);
        while(money >= 25){
            money -= 25;
            quarter++;
        }
        while(money >= 10){
            money -= 10;
            dime++;
        }
        while(money >= 5){
            money -= 5;
            nickel++;
        }
        while(money >= 1){
            money -= 1;
            penny++;
        }
        printf("%d %d %d %d\n", quarter, dime, nickel, penny);
    }

    return 0;
}