/*Programa 3: um funcionário recebe um salário fixo mais 4% de comissão sobre 
as vendas. Faça um programa que receba o salário fixo do funcionário e o 
valor de suas vendas, calcule e mostre a comissão e seu salário final.*/
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
