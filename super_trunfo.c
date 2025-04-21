#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Super Trunfo!\n");
printf("1ª Carta\n");
char Pais[20] = "Escocia";
int Populacao = 5439842;
float Area = 77.910;
float Pib = 218000000.000;
int Pontos_turisticos = 230;
float Densidade_demografica = 5439842 / 77.910;
printf("O Pais é: %s\n", Pais);
printf("1. A Populacao é: %d\n", Populacao);
printf("2. A Area em KM² é: %.3f\n", Area);
printf("3. O Pib é: %.3f\n", Pib);
printf("4. Os Pontos turisticos são: %d\n", Pontos_turisticos);
printf("5. A Densidade Demografica é: %.4f\n", Densidade_demografica);

printf("2ª Carta\n");
char pais[20] = "Brasil";
int populacao = 216541713;
float area = 8510.000;
float pib = 515000000.000;
int pontos_turisticos = 550;
float densidade_demografica = 216541.713 / 8510.000;
int Opcao;
printf("O Pais é: %s\n", pais);
printf("1. A Populacao é: %d\n", populacao);
printf("2. A Area em KM² é: %.3f\n", area);
printf("3. O Pib é: %.3f\n", pib);
printf("4. Os Pontos turisticos são: %d\n", pontos_turisticos);
printf("5. A Densidade Demografica é: %.4f\n", densidade_demografica);

printf("*****Menu:*****\n");
printf("escolha um atributo para comparação:\n");
printf("1. Populacao\n");
printf("2. Area\n");
printf("3. Pib\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demografica\n");
scanf("%d", &Opcao);

switch(Opcao){
case 1:
    printf("Escolha: Populacao\n");
break;
case 2:
    printf("Escolha: Area\n");
break;
case 3:
    printf("Escolha: Pib\n");
break;
case 4:
    printf("Escolha: Pontos Turisticos\n");
break;
case 5:
    printf("Escolha: Densidade Demografica\n");
break;
default:
    printf("Opçao invalida!\n");
    break;
}

if(Populacao > populacao){
    printf("Populaçao: Carta 1 venceu!\n");
} else {
    printf("Populaçao: Carta 2 venceu!\n");
}
if(Area > area){
    printf("Area: Carta 1 venceu!\n");
} else {
    printf("Area: Carta 2 venceu!\n");
}
if(Pib > pib){
    printf("Pib: Carta 1 venceu!\n");
} else {
    printf("Pib: Carta 2 venceu!\n");
}
if(Pontos_turisticos > pontos_turisticos){
    printf("Pontos turisticos: Carta 1 venceu!\n");
} else {
    printf("Pontos turisticos: Carta 2 venceu!\n");
}
if(Densidade_demografica > densidade_demografica){
    printf("Densidade Demografica: Carta 1 venceu!\n");
} else {
    printf("Densidade Demografica: Carta 2 venceu!\n");
}
    
  return 0;

}
