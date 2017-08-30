#include<stdio.h>

int main(int argc, char const *argv[]) {
  float lado, area_quad;
  printf("Entre com o lado do quadrado:");
  scanf("%f", &lado);
  area_quad = lado*lado;
  printf("A área do quadrado eh: %f\n", area_quad);
  return 0;
}
