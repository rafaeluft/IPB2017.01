#include<stdio.h>
void q2(){

  float base, altura, area_tri;
  printf("Entre com a base e altura do triângulo:");
  scanf("%f %f", &base, &altura);
  area_tri = 0.5*base*altura;
  printf("A área do tri eh: %.2f de base %.2f e altura %.2f\n", area_tri, base, altura);
}
void q3(){

float base, altura, area_tri;
printf("Entre com a base e altura do triângulo:");
scanf("%f %f", &base, &altura);
area_tri = 0.5*base*altura;
printf("A área do tri eh: %.2f de base %.2f e altura %.2f\n", area_tri, base, altura);
}

int main(int argc, char const *argv[]) {
  //q2();
  q3();
  return 0;
}
