#include <stdio.h>

int soma(int a, int b){
   return (a+b);
}

int subtracao(int a, int b){
   return (a-b);
}

int multiplicacao(int a, int b){
   return (a*b);
}

int divisao(int a, int b){
   return (a/b);
}

int main(){
   int a, b;
   printf("Digite o valor de a: ");
   scanf("%d", &a);

   printf("Digite o valor de b: ");
   scanf("%d", &b);

   printf("\nSoma: %d", soma(a, b));
   printf("\nSubtracao: %d", subtracao(a, b));
   printf("\nMultiplicacao: %d", multiplicacao(a, b));
   printf("\ndivisao: %d", divisao(a, b));

   return 0;
}

