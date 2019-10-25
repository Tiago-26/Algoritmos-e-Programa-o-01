/*Programa 3: construir um programa em C que leia a quantidade de mini games, 
calculadoras e canetas vendidas por um camelô ao fim de um dia e calcule, 
armazene e imprima o faturamento de cada produto e o faturamento total. 
Mini games: R$ 6.95, calculadoras: R$ 3.50 e canetas: R$ 1.20.*/
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese"); //Localizando idioma português no sistema operacional
    
	float mini_games_dia, calculadoras_dia, canetas_dia,total_dia;
	float mini_games=6.95, calculadoras=3.50, canetas=1.20;
	printf("Digite a quantidade de mini games que você vendeu: ");
	scanf("%f",&mini_games_dia);
	printf("\nDigite a quantidade de calculadoras que você vendeu: ");
	scanf("%f",&calculadoras_dia);
	printf("\nDigite a quantidade de canetas que você vendeu: ");
	scanf("%f",&canetas_dia);
	mini_games_dia=mini_games_dia*mini_games;
	calculadoras_dia=calculadoras_dia*calculadoras;
	canetas_dia=canetas_dia*canetas;
	total_dia=(mini_games_dia)+(calculadoras_dia)+(canetas_dia);
	printf("\nOs faturamentos de vendas total do dia foram:");
	printf("\nMini games: %.2f",mini_games_dia);
	printf("\nCalculadoras: %.2f",calculadoras_dia);
	printf("\nCanetas: %.2f",canetas_dia);
	printf("\n\nO faturamento de vendas total do dia foi: %.2f",total_dia);
}
