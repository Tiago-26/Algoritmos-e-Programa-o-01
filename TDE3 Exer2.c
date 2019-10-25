/*Programa 2: construir um programa em C que leia a quantidade de alunos do 
sexo masculino, do sexo feminino e a quantidade de alunos aprovados de uma 
turma e calcule, armazene e imprima o total de alunos e a porcentagem de 
alunos do sexo masculino, do sexo feminino e a porcentagem de alunos 
aprovados.*/
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese"); //Localizando idioma português no sistema operacional
    
	float homem, mulher, quantidade_al, quantidade_al_ap, p_alunos_h, p_alunos_m, p_alunos_al_ap;
	printf("Digite a quantidade de alunos do sexo masculino: ");
	scanf("%f",&homem);
	printf("\nDigite a quantidade de alunos do sexo feminino: ");
	scanf("%f",&mulher);
	quantidade_al=homem+mulher;
	printf("\nDigite a quantidade de alunos aprovados: ");
	scanf("%f",&quantidade_al_ap);
	printf("\nA turma possui %.0f alunos.",quantidade_al);
	p_alunos_h=homem/quantidade_al*(100);
	p_alunos_m=mulher/quantidade_al*(100);
	p_alunos_al_ap=quantidade_al_ap/quantidade_al*(100);
	printf("\n%.2f porcento dos alunos são do sexo masculino.",p_alunos_h);
	printf("\n%.2f porcento de alunos são do sexo feminino.",p_alunos_m);
	printf("\nMédia de aprovados na truma: %.2f porcento.",p_alunos_al_ap);
}	
