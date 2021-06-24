#include <stdio.h>

int funcao (int a){


return a*3;

}


int main(void) {
  
int (*pf) (int) = &funcao;
    
printf("valor = %d", pf(3) );
   
 return 0;

}
 