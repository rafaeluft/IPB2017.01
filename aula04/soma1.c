#include<stdio.h>
/*
Objetivo do exercicio: dado n, gerar a soma
sn = 1 + 1/2 + 1/4 + ... + 1/2n
*/
int main(int argc, char const *argv[]) {
  float soma=1.0, i;
  int n;
  scanf("%d", &n);
  for(i=2.0; i<2.0*n; i+=2.0)
  {
    soma+=1.0/i;
  }
  printf("%f", soma);
  return 0;
}
