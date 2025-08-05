#include <stdio.h>
int main(){
    int harmony[8];
    int as = 0, des = 0;
    for(int i=0; i<8; i++){
        scanf("%d", &harmony[i]);
    }
    for(int i=0; i<4; i++){
        if(harmony[i] + harmony[7-i] == 9){
            if(harmony[i] == i+1){
                as++;
            }
            else if(harmony[7-i] == i+1){
                des++;
            }
        }
    }
    if(as == 4){
        printf("ascending\n");
    }
    else if(des == 4){
        printf("descending\n");
    }
    else{
        printf("mixed\n");
    }
    return 0;
}