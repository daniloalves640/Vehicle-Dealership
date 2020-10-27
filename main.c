#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
char marca[10];
char modelo [10];
char ano [10];
char placa [10];
} veiculos;

veiculos vei [10];

int lista = 0;

void cadastroDeVeiculos(){
  int i = 0;
  for (i = 0; i < 3; i++){
  printf("Insira a marca:");
  scanf("%s", vei[i].marca);
  printf("Insira o modelo:");
  scanf("%s", vei[i].modelo);
  printf("Insira o ano:");
  scanf("%s", vei[i].ano);
  printf("Insira a placa:");
  scanf("%s", vei[i].placa);
  lista += lista;
  }
}

void buscaAno(){
  int i = 0;
  int cont = 1;
  char ano[4];
  printf("Insira o ano para busca:");
  scanf("%s", ano);
  for (i = 0; i < 3; i++){
  if (!strcmp(vei[i].ano, ano)){
    printf("Marca: %s Modelo: %s Ano: %s Placa: %s\n", vei[i].marca, vei[i].modelo, vei[i].ano, vei[i].placa);
  }else
  printf("Não há veículo para a busca.");
  }
}

void buscaModelo(){

  int i = 0;
  int cont = 1;
  char modelo[10];
  printf("Insira o modelo para busca:");
  scanf("%s", modelo);
  for (i = 0; i < 3; i++){
  if (!strcmp(vei[i].modelo, modelo)){
    printf("%s\n%s\n%s\n%s", vei[i].marca, vei[i].modelo, vei[i].ano, vei[i].placa);
  }else
  printf("Não há veículo para a busca");
  }
}

void listarVeiculos(){

  int i = 0;
  for (i = 0; i < 3; i++){
        printf("%s\n%s\n%s\n%s", vei[i].marca, vei[i].modelo, vei[i].ano, vei[i].placa);
  }
}

int main(void) {
int i = 0;
int option;

loop:

printf("========================================================\n");
printf("Insira a opção desejada:");
printf("\n[1] - Para listar todos os veículos.");
printf("\n[2] - Para cadastrar um novo veículo.");
printf("\n[3] - Para pesquisar os veículos por modelo.");
printf("\n[4] - Para pesquisar os veículos por ano.");
printf("\n[5] - Para sair;");
printf("\n");

scanf("%d", &option);

  switch (option){

    case 1 :
    
    listarVeiculos();
    
    getchar();

    break;

    case 2 :

    cadastroDeVeiculos();

    break;

    case 3 :

    buscaModelo();

    break;

    case 4 :

    buscaAno();

    break;

    case 5 :
    
    goto sair;

    break;

    default:

    printf("Opção inválida.");

    break;

  }
  
  goto loop;
  sair:;
  printf("Programa encerrado.");
  getchar();
}



