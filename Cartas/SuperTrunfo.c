#include <stdio.h>

int main() {

char estado; 
int populaçao;
float area;
float pib;
int pontos; //pontos turisticos 
char cidade[50]; // Nome da sua cidade
char codigo[20]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)

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

   float densidade = (float) populaçao / area;
   float percapita = (float) pib / populaçao;





      //exibição dos dados
    printf("Carta:1 \n");
    printf("Estado: %c \n", estado);  
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade); 
    printf("População: %i \n", populaçao);
    printf("Área: %.2f km² \n", area);  
    printf("PIB: %.2f \n", pib);
    printf("Pontos turísticos: %i \n", pontos);
    printf("A densidade Populacional é: %.2f hab/km² \n", densidade);
    printf("O PIB PER CAPITA É: %.2f Reais \n", percapita);

// SEGUNDA CARTA


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

float densidadee = (float) populaçao / area;
float pibper = (float) pib / populaçao;

   printf("Carta:2 \n");
   printf("Estado: %c \n", estado);  
   printf("Código: %s \n", codigo);
   printf("Cidade: %s \n", cidade); 
   printf("População: %i \n", populaçao);
   printf("Área: %.2f km² \n", area);  
   printf("PIB: %.2f \n", pib);
   printf("Pontos turísticos: %i \n", pontos);
   printf("A densidade Populacional é: %.2f hab/km² \n", densidadee);
   printf("O PIB PER CAPITA É: %.2f Reais \n", pibper);







    return 0;
}