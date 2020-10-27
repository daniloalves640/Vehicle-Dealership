#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
char marca[10];
char modelo [10];
char ano [10];
} veiculos;

veiculos vei [10];

void cadastroDeVeiculos(){
int i = 0;
for (i = 0; i < 3; i++){
printf("Insira a marca:");
gets(vei[i].marca);
printf("Insira o modelo:");
gets(vei[i].modelo);
printf("Insira o ano:");
gets(vei[i].ano);
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
printf("%s%s%s", vei[i].ano, vei[i].marca, vei[i]. modelo);
}else
printf("Não há veículo para a busca");
}
}

int main(void) {
int i = 0;
int c;

printf("========================================================\n");
printf("Insira a opção desejada:");
scanf("%d", &c);

switch (c){

case "1" :
    printf("E segunda-feira.");
    break;



}

cadastroDeVeiculos();
for (i=0; i < 3; i++){
printf("%s\n%s\n", vei[i].marca, vei[i].modelo);
}
buscaAno();
getchar();
}

