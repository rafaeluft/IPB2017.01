#include<stdio.h>

int main(int argc, char const *argv[]) {
  int op;
  do{
    puts("1 - Para fazer alguma coisa 1");
    puts("2 - Para fazer alguma coisa 2");
    puts("3 - Para fazer alguma coisa 3");
    puts("4 - Para fazer alguma coisa 4");
    puts("0 - Para sair");
    puts("Entre com a opção:");
    scanf("%d", &op);
    switch (op) {
      case 1: //Código da divisão
        puts("A opção 1 foi selecionada!");
        break;
      case 2:
        puts("Opaaa, agora a 2 foi selecionada!");
        break;
      case 3:
        puts("Opaaa, agora a 3 foi selecionada!");
        break;
      case 4:
        puts("Opaaa, agora a 4 foi selecionada!");
        break;
      case 0: break;
      default:
        puts("Digite uma opção válida!");
    }
  }while(op != 0);
  return 0;
}
