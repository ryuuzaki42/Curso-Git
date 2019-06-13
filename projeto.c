#include <stdio.h>

int soma(int a, int b){
   return (a+b);
}

int subtracao(int a, int b){
   return (a-b);
}

int main(){
   int a, b;
   printf("Digite o valor de a: ");
   scanf("%d", &a);

   printf("Digite o valor de b: ");
   scanf("%d", &b);

   printf("Soma: %d", soma(a, b));
   printf("Soma: %d", subtracao(a, b));

   return 0;
}
