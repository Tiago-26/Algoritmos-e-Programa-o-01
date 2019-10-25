/*Programa 2: faça um programa que receba o preço de um produto, calcule e 
mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.*/
#include <stdio.h>
main()
{
	float preco,preco_d10;
	printf("Digite o valor do produto: ");
	scanf("%f",&preco);
	preco_d10=preco-preco*0.10;
	printf("O preco com desconto eh: %.2f",preco_d10);
}
