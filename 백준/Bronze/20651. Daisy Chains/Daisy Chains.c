#include<stdio.h>
int N, set[300],cnt;
int main()
{
  int i,j,k;
  scanf("%d",&N);
  for(i=1;i<=N;i++){
    scanf("%d",&set[i]);
  }

  for(i=1;i<=N;i++){
    for(j=i;j<=N;j++){
      int sum=0, avg;
      for(k=i;k<=j;k++){
        sum = sum + set[k];
      }
      avg = sum / (j-i+1);
      if (sum%(j-i+1)!=0) continue;
      for(k=i;k<=j;k++){
        if(set[k]==avg) {
          break;
        }
      }
      if (k!=j+1){
        cnt++;
      }
    }
  }
  printf("%d",cnt);
  return 0;
}