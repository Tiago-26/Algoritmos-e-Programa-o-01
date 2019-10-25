/*Programa 1: construir um programa em C que leia o salário bruto de um 
funcionário, calcule, armazene e imprima o salário bruto, um desconto de 
8% e o salário líquido.*/
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Portuguese"); //Localizando idioma português no sistema operacional
  
    float sal_bru, sal_liq, desconto=0.08;
	printf("Digite o seu salário bruto: ");
	scanf("%f",&sal_bru);
	desconto=desconto*sal_bru;
	printf("\nO desconto é de %.2f",desconto);
	sal_liq=sal_bru-desconto;
	printf("\nSeu salário liquido é de %.2f",sal_liq);
}
