#include<stdio.h>

int main(int argc, char const *argv[]) {
  int a;
  puts("Entre com a opção (1 ou 2):");
  scanf("%c", &a);
  switch (a) {
    case '\\':
    case '/': //Código da divisão
      puts("A opção 1 foi selecionada!");
      //break;
    case 2:
      puts("Opaaa, agora a 2 foi selecionada!");
      break;
    /*default:
      puts("Nem 1 nem 2!"); break;*/
  }
  return 0;
}
