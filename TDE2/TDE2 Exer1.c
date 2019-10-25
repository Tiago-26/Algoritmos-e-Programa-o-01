/*Programa 1: faça um programa que receba dois números, calcule e mostre a 
média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 
para segunda.*/
#include <stdio.h>
main()
{
	float num1,num2,m_poderada;
	printf("Digite a primeira nota: ");
	scanf("%f",&num1);
	printf("Digite a segunda nota: ");
	scanf("%f",&num2);
	m_poderada=((num1*2)+(num2*3))/5;
	printf("A media ponderada eh: %.2f",m_poderada);
}
