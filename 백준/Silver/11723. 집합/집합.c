#include <stdio.h>
#include <string.h>
int s[21];
int main(){
    int m, x;
    char cmd[10];
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%s", cmd);
        if(strcmp(cmd, "add") == 0){
            scanf("%d", &x);
            s[x] = x;
        }
        else if(strcmp(cmd, "remove") == 0){
            scanf("%d", &x);
            s[x] = 0;
        }
        else if(strcmp(cmd, "check") == 0){
            scanf("%d", &x);
            if(s[x] == x) printf("1\n");
            else printf("0\n");
        }
        else if(strcmp(cmd, "toggle") == 0){
            scanf("%d", &x);
            if(s[x] == x) s[x] = 0;
            else s[x] = x;
        }
        else if(strcmp(cmd, "all") == 0){
            for(int k=1; k<=20; k++){
                s[k] = k;
            }
        }
        else if(strcmp(cmd, "empty") == 0){
            for(int k=1; k<=20; k++){
                s[k] = 0;
            }
        }
    }
    return 0;
}