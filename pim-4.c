#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrutura dos dados do login para criar e fazer o login
typedef struct dados_do_login {
  char *usuario;
  int *senha;
};


//funções.
void limpaTela();

//função main.
int main() {

  telaInicialLogin();
}

//fazer o primero acesso que seria o cadastro e depois fazer o login.
void telaInicialLogin(){

  FILE *fp;
  struct dados_do_login PLogin;
  memset(&PLogin, 0, sizeof(struct dados_do_login));

  int funcaoDesejada = 1;

  while(funcaoDesejada < 3 && funcaoDesejada > 0) {
  //mostra as opções ao iniciar o programa
  printf("\n\n----- Faca o login -----\n\n");
  printf("1 - Primeiro acesso");
  printf("\n2 - Fazer login");
  printf("\n3 - Sair do programa");
  printf("\n\nDigite a opcao desejada: \n");

  scanf("%d", &funcaoDesejada);

  limpaTela();

  switch(funcaoDesejada) {
    case 1:
      //dados cadastrais.
      printf("\nFuncao escolhida: 1 - Primeiro acesso\n");

      printf("\nDigite um usuario: ");
      scanf("%s", &PLogin.usuario);

      printf("\nDigite uma senha: ");
      scanf("%s", &PLogin.senha);
      
      limpaTela();
      break;

    case 2: 
      //fazer o login
      printf("\nFuncao escolhida: 2 - Fazer login\n");

      printf("\nDigite um usuario: ");
      scanf("%s", &PLogin.usuario);

      printf("\nDigite uma senha: ");
      scanf("%s", &PLogin.senha);
      
      limpaTela();
      break;
    }
  }
}
void limpaTela() {
    system("CLS");
}