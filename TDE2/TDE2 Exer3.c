/*Programa 3: um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre 
as vendas. Fa�a um programa que receba o sal�rio fixo do funcion�rio e o 
valor de suas vendas, calcule e mostre a comiss�o e seu sal�rio final.*/
#include <stdio.h>
main()
{
	float salario,vendas,comissao,salario_final;
	printf("Digite o valor do seu salario: ");
	scanf("%f",&salario);
	printf("Digite o valor das suas vendas: ");
	scanf("%f",&vendas);
	comissao=vendas*0.04;
	printf("O valor da sua comissao eh: %.2f",comissao);
	salario_final=salario+comissao;
	printf("\nO valor do seu salario mais sua comissao eh: %.2f",salario_final);	
}
