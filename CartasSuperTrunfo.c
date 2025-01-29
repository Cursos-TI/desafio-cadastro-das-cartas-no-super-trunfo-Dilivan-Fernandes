#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


// Estrutura de dados da primeira carta
struct Carta1{
char Estado[50];
char CodigoDaCarta[5];
char NomeDaCidade[50];
int Populacao;
float Area;
float PIB;
int PontosTuristicos;

};

// Estrutura de dados da segunda carta.
struct Carta2{
char Estado[50];
char CodigoDaCarta[5];
char NomeDaCidade[50];
int Populacao;
float Area;
float PIB;
int PontosTuristicos;

};


int main() {
        setlocale(LC_ALL,"Portuguese");//  Abilita o uso de acentos nos textos.

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf(".........................SUPER TRUNFO.............................\n\n");// Texto da interface.
printf("//////////////////CADASTRE A 1ª CARTA/////////////////////////////\n\n");// Texto da interface.

struct Carta1 carta1;//  Estrutura de dados da primeira carta
struct Carta2 carta2; //  Estrutura de dados da segunda carta.

//  Captura de dados da primeira carta.
   printf("Digite o estado...............: ");
   scanf("%s",&carta1.Estado);// Captura do estado.

   printf("Digite o código da carta......: ");
   scanf("%s",&carta1.CodigoDaCarta);// Captura do código da carta.

   printf("Digite o nome da cidade.......: ");
   scanf("%s",&carta1.NomeDaCidade);// Captura do nome da cidade.

   printf("Digite a população............: ");
   scanf("%d",&carta1.Populacao);// Captura da população.

   printf("Digite a área em km²..........: ");
   scanf("%f",&carta1.Area);// Captura da área.

   printf("Digite o PIB .................: ");
   scanf("%f",&carta1.PIB);// Captura do PIB.

   printf("Digite a quantidade de pontos turísticos..: ");
   scanf("%d",&carta1.PontosTuristicos);// Captura da quantidade de pontos turísticos.

 printf("\n\n//////////////////CADASTRE A 2ª CARTA/////////////////////////////\n\n");// Texto da interface.


    //  Captura de dados da segunda carta.
   printf("Digite o estado...............: ");
   scanf("%s",&carta2.Estado);// Captura do estado.

   printf("Digite o código da carta......: ");
   scanf("%s",&carta2.CodigoDaCarta);// Captura do código da carta.

   printf("Digite o nome da cidade.......: ");
   scanf("%s",&carta2.NomeDaCidade);// Captura do nome da cidade.

   printf("Digite a população............: ");
   scanf("%d",&carta2.Populacao);// Captura da população.

   printf("Digite a área em km²..........: ");
   scanf("%f",&carta2.Area);// Captura da área.

   printf("Digite o PIB .................: ");
   scanf("%f",&carta2.PIB);// Captura do PIB.

   printf("Digite a quantidade de pontos turísticos..: ");
   scanf("%d",&carta2.PontosTuristicos);// Captura da quantidade de pontos turísticos.

   printf("\n\n");//  Quebra de linhas.

    // Exibição dos Dados das Cartas:
 printf("\n Cartas cadastradas\n");

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
