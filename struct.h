#include <stdio.h>
#include <stdlib.h>

// estrutura de usuario e paciente
typedef struct auxiliar
{

    char usuario[61];
    int senha;

    char nome[61], email[70], comorbidade[30];

    char rua[30], bairro[30], cidade[30], estado[15];
    int cep, numero;

    int cpf, telefone, idade, dataDoDiagnostico;
    struct auxiliar *ant, *prox;
} * Pcadastro;

//estrutura da fila
typedef struct
{

    Pcadastro fila;
    Pcadastro *Parray;

    int maximoDeElementos;
} filaPrioridade, *Pfila;

///funçoes

Pfila criarFila(int max);

int tamanhoDaFila(Pfila F);

void inserirUsuario(Pfila F, char usuario, int senha);

void inserirDadosPessoais(Pfila F, char nome, char comorbidades, int cpf, int idade, int dataDoDiagnostico);

void inserirEndereço(char rua, char bairro, char cidade, char estado, int cep, int numero);

void inserirDadosOpcionais(char email, int telefone);
