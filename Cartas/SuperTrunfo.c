#include <stdio.h>

int main() {

char estado; 
int populaçao;
float area;
float pib;
int pontos; //pontos turisticos 
int carta; 
char cidade[50]; // Nome da sua cidade
char codigo[20]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)

   printf("Escolha a Carta 1 ou 2: \n");
   scanf("%i", &carta);
  
   printf("Digite a letra  seu estado A-H \n");
   scanf(" %c", &estado);
   
   printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) \n");
   scanf("%s", codigo);
   
   printf("Digite o nome da cidade \n");
   scanf("%s", cidade);

   printf("Digite a população da cidade\n");
   scanf("%i", &populaçao);
  
   printf("Digite a area da cidade em km quadrado \n");
   scanf("%f", &area);

   printf("Digite o pib da cidade \n");
   scanf("%f", &pib);

   printf("Digite quantos pontos turisticos \n");
   scanf("%i", &pontos);

   
   //exibição dos dados

   printf("Carta: %i \n", carta);
    printf("Estado: %c \n", estado);  
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade); 
    printf("População: %i \n", populaçao);
    printf("Área: %.2f km² \n", area);  
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %i \n", pontos);

    return 0;
}