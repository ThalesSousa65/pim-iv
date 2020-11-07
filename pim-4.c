#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//estrutura dos dados do login para criar e fazer o login
typedef struct dados_do_login
{
  char usuario[61];
  int senha;
} dados_do_login;

typedef struct {
dados_do_login 
  A[]; 
} arquivo;

//funções.
void limpaTela();
void adcUsuario(dados_do_login *Plogin, arquivo *Parq, char usuario, int senha);

//função main.
int main()
{
  telaInicialLogin();

  return 0;
}

//fazer o primero acesso que seria o cadastro e depois fazer o login.
void telaInicialLogin()
{
  dados_do_login *Plogin;

  arquivo *Parq;
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
      int senha[61];

    switch (funcaoDesejada)
    {
    case 1:
        //dados cadastrais.
        printf("\nFuncao escolhida: 1 - Primeiro acesso: \n");

        printf("\nDigite um usuario: ");

        //limpar o buffer
        setbuf(stdin, 0);

        //lê a string
        fgets(usuario, 61, stdin);

        //limpa as casas nao ultilizada
        usuario[strlen(usuario) - 1] = '\0';

          printf("\nDigite uma senha: ");

          //limpar o buffer
          setbuf(stdin, 0);

          //lê a string
          fgets(senha, 61, stdin);

          //limpa as casas nao ultilizada
          senha[strlen(senha) - 1] = '\0';

        //adicionar o novo usuario oa arquivo
        adcUsuario(Plogin, Parq, usuario, senha);

        limpaTela();
      break;

    case 2:
        //fazer o login
        printf("\nFuncao escolhida: 2 - Fazer login\n");

        printf("\nDigite um usuario: ");
        scanf("%s", &Plogin->usuario);

          printf("\nDigite uma senha: ");
          scanf("%d", &Plogin->senha);

        limpaTela();
      break;
    }
  }
}

void limpaTela()
{
  system("CLS");
}

void adcUsuario(dados_do_login *Plogin, arquivo *Parq, char usuario, int senha)
{
}

