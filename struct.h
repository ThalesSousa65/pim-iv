#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estrutura de usuario e paciente
typedef struct auxiliar
{

    char usuario[61];
    int senha;

    char nome[61], email[71], comorbidade[31];

    char rua[31], bairro[31], cidade[31], estado[16];
    int cep, numero;

    int cpf, telefone, idade, dataDoDiagnostico;
    struct auxiliar *ant, *prox;

} auxliar, *Pcadastro;

//estrutura da fila
typedef struct filaPrioridade
{

    Pcadastro fila;
    Pcadastro *Parray;

    int maximoDeElementos;

} filaPrioridade, *Pfila;

///funçoes
Pfila criarFila(int max);

int tamanhoDaFila(Pfila F);

void inserirUsuario(Pfila F, char usuario, int senha);

void inserirDadosPessoais(Pfila F, char nome, char comorbidade, int cpf, int idade, int dataDoDiagnostico);

void inserirEndereco(char rua, char bairro, char cidade, char estado, int cep, int numero);

void inserirDadosOpcionais(char email, int telefone);
