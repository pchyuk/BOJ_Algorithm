#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int weight;
    int height;
    int rank;
} Person;

int main(){
    int n;
    scanf("%d", &n);

    Person p[n];
    for(int i=0; i<n; i++){
        scanf("%d %d", &p[i].weight, &p[i].height);
        p[i].rank = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(p[i].weight < p[j].weight && p[i].height < p[j].height){
                p[i].rank++;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", p[i].rank);
    }
    printf("\n");
    return 0;
}