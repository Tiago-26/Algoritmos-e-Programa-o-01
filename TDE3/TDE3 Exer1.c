/*Programa 1: construir um programa em C que leia o sal�rio bruto de um 
funcion�rio, calcule, armazene e imprima o sal�rio bruto, um desconto de 
8% e o sal�rio l�quido.*/
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Portuguese"); //Localizando idioma portugu�s no sistema operacional
  
    float sal_bru, sal_liq, desconto=0.08;
	printf("Digite o seu sal�rio bruto: ");
	scanf("%f",&sal_bru);
	desconto=desconto*sal_bru;
	printf("\nO desconto � de %.2f",desconto);
	sal_liq=sal_bru-desconto;
	printf("\nSeu sal�rio liquido � de %.2f",sal_liq);
}
