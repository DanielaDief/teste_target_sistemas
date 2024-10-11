// 4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
// • SP – R$67.836,43
// • RJ – R$36.678,66
// • MG – R$29.229,88
// • ES – R$27.165,48
// • Outros – R$19.849,53

// Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve 
// dentro do valor total mensal da distribuidora.  

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	
	float sp = 67836.43;
	float rj = 36678.66;
	float mg = 29229.88;
	float es = 27165.48;
	float outros = 19849.53;
	
	//faz o calculo do faturamento total
	float total = sp+rj+mg+es+outros;
	
	//calcula o percentual de cada estado
	float per_sp = (sp / total) *100;
	float per_rj = (rj / total) *100;
	float per_mg = (mg / total) *100;
	float per_es = (es / total) *100;
	float per_outros = (outros / total) *100;
	
	printf("Percentual de representação de cada estado:\n");
	printf("SP: %.2f%%\n", per_sp);
	printf("RJ: %.2f%%\n", per_rj);
	printf("MG: %.2f%%\n", per_mg);
	printf("ES: %.2f%%\n", per_es);
	printf("OUTROS: %.2f%%\n", per_outros);
	
}