#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[103];
    while(fgets(str, 102, stdin) != NULL){
        printf("%s", str);
    }
    return 0;
}