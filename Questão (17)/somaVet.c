#include <stdio.h>
#include <stdlib.h>


int main() {
int i;
  int vetA[5], vetB[5], vetC[5];
  printf("preenchendo o vetor A \n");
    for (i=0;i<5;i++){
      printf("%d- N:",i+1);
      scanf("%d", &vetA[i]);
    }
  
  printf("\n\n");
    printf("preenchendo o vetor B \n");
    for (i=0;i<5;i++){
      printf("%d- N:",i+1);
      scanf("%d", &vetB[i]);
    }

  printf("\n\n");

  for(i=0;i<5;i++){
    vetC[i]=(vetA[i]+vetB[i]);
  }

  printf("\n\n");
for(i=0;i<5;i++){

  printf("Soma de A e B: %d \n",vetC[i]);
}
  printf("\n\n");

     return 0; 
}