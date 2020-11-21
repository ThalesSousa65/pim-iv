#include "struct.h"
#include <string.h>

/// Funções
void limpaTela();
int telaInicialLogin();
int tamanhoDaFila(Pfila F);
void inserirUsuario(Pfila F, char usuario, int senha);

/// main
int main()
{

  telaInicialLogin();
}

int telaInicialLogin()
{
  Pcadastro Plista;

  int funcaoDesejada = 1;

  Pcadastro Plogin = (Pcadastro)malloc(sizeof(Pcadastro));
  strcpy(Plogin->usuario, NULL);
  Plogin->senha = 0;
  Plogin->prox = NULL;
  Plogin->ant = -1;

  Plista = Plogin;

  while (Plista != NULL)
  {
    Plista = Plista->prox;
  }

  while (funcaoDesejada < 3 && funcaoDesejada > 0)
  {
    //mostra as opções ao iniciar o programa
    printf("\n\n----- Faca o login -----    Tamanho da fila: %d", tamanhoDaFila(Plista));
    printf("   Quantida de usuarios cadastrados: \n ");
    printf("\n1 - Primeiro acesso");
    printf("\n2 - Fazer login");
    printf("\n3 - Sair do programa");
    printf("\n\nDigite a opcao desejada: \n");

    //escuta a call do usuario
    scanf("%d", &funcaoDesejada);

    limpaTela();

    char usuario[61];
    int senha;

    //chama a função desejada
    switch (funcaoDesejada)
    {
    case 1:
      printf("Bem vindo! crie uma usuario e senha para conseguir fazer um login\n");

      printf("\nDigite um usuario: ");
      fgets(&Plogin->usuario, 61, stdin);

      printf("\nDigite uma senha: ");
      scanf("%d", &Plogin->senha);

      inserirUsuario(Plista, usuario, senha);

      break;

    case 2:
      printf("Insira seu usuario e senha nos campos abaixo: \n\n");

      printf("\nDigite seu usuario: ");
      fgets(&Plogin->usuario, 61, stdin);

      printf("\nDigite sua senha: ");
      scanf("%d", &Plogin->senha);

      if (senha == Plogin->senha)
      {

        while (funcaoDesejada < 3 && funcaoDesejada > 0)
        {

          printf("\n\n----- Faca o login -----");
          printf("\n1 - Cadastrar paciente");
          printf("\n2 - Mostrar casos com prioridade");
          printf("\n3 - Sair do programa");
          printf("\n\nDigite a opcao desejada: \n");

          //escuta a call do usuario
          scanf("%d", &funcaoDesejada);

          switch (funcaoDesejada)
          {
          case 1:
            break;

          case 2:
            break;
          }
        }
      }
      else
      {
        limpaTela();

        printf("\nUsuario ou senha invalidos!");
      }

      break;
    }
  }
}

void limpaTela()
{
  system("CLS");
}

int tamanhoDaFila(Pfila F)
{
  //tamanho da lista
  int tamanho = 0;

  Pcadastro Plista;

  while (Plista != NULL)
  {

    //Atualiza o tamanho
    Plista = Plista->prox;

    //Contador de tamanho aumenta
    tamanho++;
  }

  return tamanho;
}

void inserirUsuario(Pfila F, char usuario, int senha)
{

  Pcadastro Plogin = (Pcadastro)malloc(sizeof(Pcadastro));
  strcpy(usuario, Plogin->usuario);
  Plogin->senha = senha;
  Plogin->prox = NULL;
  Plogin->ant = -1;

  Pcadastro Plista;

  while (Plista != NULL)
  {

    if (Plista->prox == NULL)
    {
      Plista->prox = Plogin;

      return;
    }

    Plista = Plista->prox;
  }
}
