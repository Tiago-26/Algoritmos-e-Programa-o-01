/*Programa 2: fa�a um programa que receba o pre�o de um produto, calcule e 
mostre o novo pre�o, sabendo-se que este sofreu um desconto de 10%.*/
#include <stdio.h>
main()
{
	float preco,preco_d10;
	printf("Digite o valor do produto: ");
	scanf("%f",&preco);
	preco_d10=preco-preco*0.10;
	printf("O preco com desconto eh: %.2f",preco_d10);
}
