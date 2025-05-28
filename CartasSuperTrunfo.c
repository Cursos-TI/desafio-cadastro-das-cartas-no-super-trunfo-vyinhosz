#include <stdio.h>
// Definimos uma estrutura chamada "Carta" que representa os dados de uma cidade
typedef struct {
int populacao;
float area;
float pib;
int pontos_turisticos;
char nome[1000]; // string para armazenar o nome da cidade, com tamanho máximo de 49 caracteres + 1 para o terminador nulo

} Carta;


int main() {

//tipos de variaveis para armazenar os dados das duas cartas

    Carta carta1;
    Carta carta2;

//dados da primeira carta

printf ("Cadastro da carta 1\n");
printf("Digite o nome da cidade:");
fgets(carta1.nome, sizeof(carta1.nome), stdin); //lendo o nome da cidade, fgets é usado para ler strings com espaços
printf("População: ");
scanf("%d", &carta1.populacao); //lendo um numero inteiro da população

printf("Área (km²):");
scanf("%f", &carta1.area); //lendo um numero decimal da area

printf("PIB (em bilhões):");
scanf("%f", &carta1.pib); //lendo um numero em decial do pib

printf("Números de pontos turísticos:");
scanf("%d", &carta1.pontos_turisticos);


//dados da segunda carta
printf ("Cadastro da carta 2\n");
printf("Digite o nome da cidade:");
getchar(); // limpa o \n deixado pelo scanf anterior
fgets(carta2.nome, sizeof(carta2.nome), stdin);
printf("População: ");
scanf("%d", &carta2.populacao); //lendo um numero inteiro da população


printf("Área (km²):");
scanf("%f", &carta2.area); //lendo um numero decimal da area segunda carta

printf("PIB (em bilhões):");
scanf("%f", &carta2.pib); //lendo um numero em decial do pib segunda carta

printf("Números de pontos turísticos:");
scanf("%d", &carta2.pontos_turisticos); //lendo numero inteiro de pontos turisticos da segunda carta

//mostrar dados da primeira carta

printf("\n Dados da Carta 1\n");
printf("Nome da cidade: %s", carta1.nome);
printf("População: %d\n", carta1.populacao);
printf("Área: %.2f km²\n", carta1.area);
printf("PIB: %.2F bilhões\n", carta1.pib);
printf("Pontos Turísticos: %d\n", carta1.pontos_turisticos);

//mostrar dados da segunda carta


printf("\n Dados da Carta 2\n");
printf("Nome da cidade: %s", carta2.nome);
printf("População: %d\n", carta2.populacao);
printf("Área: %.2f km²\n", carta2.area);
printf("PIB: %.2F bilhões\n", carta2.pib);
printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);


//cabô
    return 0;
}