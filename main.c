#include "struct.h"

int tamanhoDaFila(Pfila F);
void inserirUsuario(Pfila F, char usuario, int senha);

int telaInicialLogin()
{
  Pcadastro login;
  login->usuario;
  login->senha;

  int funcaoDesejada = 1;

  while (funcaoDesejada < 3 && funcaoDesejada > 0)
  {
    //mostra as opções ao iniciar o programa
    printf("\n\n----- Faca o login -----\n\n");
    printf("1 - Primeiro acesso");
    printf("\n2 - Fazer login");
    printf("\n3 - Sair do programa");
    printf("\n\nDigite a opcao desejada: \n");

    scanf("%d", &funcaoDesejada);

    limpaTela();

    char usuario[61];
    int senha;

    switch (funcaoDesejada)
    {
    case 1:
      printf("Bem vindo! crie uma usuario e senha para conseguir fazer um login");

      printf("\nDigite um nome de usuario: ");
      scanf("%s", &login->usuario);

      printf("\nDigite uma senha: ");
      scanf("%d", &login->senha);

      inserirUsuario(login, usuario, senha);
      break;

    case 2:
      break;
    }
  }
}

int tamanhoDaFila(Pfila F)
{
  Pcadastro login;

  int tamanho = 0;

  Pfila F;

  while (F != NULL)
  {

    F = login->prox;

    tamanho++;
  }

  return tamanho;
}

void inserirUsuario(Pfila F, char usuario, int senha)
{

  Pcadastro login;
  login->usuario;
  login->senha;
  login->prox = NULL;

  Pfila F;

  while (F != NULL)
  {

    if (login->prox == NULL)
    {
      login->prox = login;

      return;
    }

    login = login->prox;
  }
}
