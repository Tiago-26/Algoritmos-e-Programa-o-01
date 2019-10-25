/*Programa 4: faça um programa que receba o ano de nascimento de uma pessoa, 
calcule e mostre a sua idade aproximada. */
#include <stdio.h>
main()
{
	int ano_atual,ano_nasc,idade;
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	printf("Digite o ano de seu nascimento: ");
	scanf("%d",&ano_nasc);
	idade=ano_atual-ano_nasc;
	printf("A sua idade aproximada eh: %d",idade);	
}
