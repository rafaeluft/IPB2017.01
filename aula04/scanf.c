#include<stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  while(1){
    scanf("%d", &n);
    if(n==0)
      break;
    printf("%d\n", n*n);
  }
  return 0;
}
