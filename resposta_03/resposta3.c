// 3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem 
// que desejar, que calcule e retorne:
// • O menor valor de faturamento ocorrido em um dia do mês;
// • O maior valor de faturamento ocorrido em um dia do mês;
// • Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

// IMPORTANTE:
// a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal;
// b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no 
// cálculo da média;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	//Declaração das variáveis.
	int diasMes = 30;
	float faturamento[diasMes];
	float soma = 0, media = 0;
	float menorFaturamento, maiorFaturamento;
	int diasAcimaDaMedia = 0;
	int i;
	
	//Faturamento diário
	printf("Digite o faturamento para cada um dos 30 dias:\n");
	for(i=0; i<diasMes; i++){
		printf("Dia %d: ", i+1);
		scanf("%f", &faturamento[i]);
		
		//Cálcula a média
		soma = soma + faturamento[i];
		
		if(i == 0){
			menorFaturamento = faturamento[i];
			maiorFaturamento = faturamento[i];
		} else {
			//menor faturamento
			if(faturamento[i] < menorFaturamento){
				menorFaturamento = faturamento[i];
			}
			if(faturamento[i] > maiorFaturamento){
				maiorFaturamento = faturamento[i];
			}
		}
	}
	
	//média mensal de faturamento
	media = soma/diasMes;
	for(i=0; i<diasMes; i++){
		if(faturamento[i] > media){
		   diasAcimaDaMedia++;	
		}
	}
	
	//Resultados
	printf("\nMenor valor de faturamento ocorrido: %.2f\n", menorFaturamento);
	printf("\nMaior valor de faturamento ocorrido: %.2f\n", maiorFaturamento);
	printf("\nNúmero de dias com faturamento acima da média: %d\n", diasAcimaDaMedia);
	
	return 0;
}