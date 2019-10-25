/*Programa 4: construir um programa em C que leia a quantidade de vitórias, 
derrotas e empates de um time ao final de um campeonato e que calcule, 
armazene e imprima a quantidade total de jogos, a quantidade de pontos 
disputados, de pontos ganhos e pontos perdidos. Vitória: 3 pontos, 
empate: 1 ponto e derrota: 0 ponto.*/
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese"); //Localizando idioma português no sistema operacional
	
	int pontos, pontos_disp, pontos_perd, jogos, vitoria, empate, derrota, vitoria_v=3, empate_v=1, derrota_v=0;
	printf("Digite abaixo a quantidade de vitórias, empates e derrotas que seu time teve.\n");
	printf("\nVitórias:");
	scanf("%d",&vitoria);
	printf("\nEmpates:");
	scanf("%d",&empate);
	printf("\nDerrotas:");
	scanf("%d",&derrota);
	jogos=vitoria+empate+derrota;
	pontos_disp=jogos*3;
	pontos_perd=derrota*3+empate*2;
	vitoria=vitoria*vitoria_v;
	empate=empate*empate_v;
	derrota=derrota*derrota_v;
	pontos=vitoria+empate+derrota;
	printf("\nO total de jogos disputados foram: %d jogos",jogos);
	printf("\nO total de pontos ganhos foram: %d pontos",pontos);
	printf("\nO total de pontos disputados foram: %d pontos",pontos_disp);
	printf("\nO total de pontos perdidos foram: %d pontos",pontos_perd);
}
