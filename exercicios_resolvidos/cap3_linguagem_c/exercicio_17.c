#include <stdio.h>

int main(){
   unsigned int numero, complemento;

   scanf("%d", &numero);

   complemento = ~numero;

   printf("O complemento bit a bit de %d é %d\n", numero, complemento);


   return 0;
}

/*
tentar entender pq o resultado é diferente quando usamos inteiros
e não unsigned char
*/