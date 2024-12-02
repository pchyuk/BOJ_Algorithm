#include <stdio.h>
#include <stdlib.h>
int main()
{
    int count = 0;
    int len;
    char str[1000000];

    scanf("%[^\n]s", str);
    len = strlen(str);

    if (len == 1 && str[0] == ' '){
        printf("%d\n", count);
        return 0;
    }

    for (int i = 1; i < len - 1; i++){
        if(str[i] == ' '){
            count++;
        }
    }

    printf("%d\n", count+1);
    return 0;
}