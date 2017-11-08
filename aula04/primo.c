#include<stdio.h>

int main(int argc, char const *argv[]) {
  int primo=1, i, n;
  scanf("%d", &n);
  for(i=2; i< n; i++)
    if(n % i == 0){
      primo = 0; break;
    }
  n = (n<0)? 0 : n;
  printf("%s\n", (primo)? "É primo": "Não é primo");
  return 0;
}
