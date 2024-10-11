// 2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores 
// anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, 
// informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado 
// pertence ou não a sequência.

// IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>


int main() {
	setlocale(LC_ALL, "");
	
	int numero;
	int a = 0, b = 1, proximo = 0;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	//Caso o número informado seja 0 ou 1
	if(numero == 0 || numero == 1){
	   printf("O número %d pertence à sequência Fibonacci. \n", numero);	
	}
	
	//Gera a sequência Fibonacci até atingir ou  ultrapassar a número informado
	while(proximo < numero){
		proximo = a+b;
		a = b;
		b = proximo;
	}
	
	//Verifica se o número pertence à sequência de Fibonacci
	if(proximo == numero){
		printf("O número %d pertence à sequencia de Fibonacci.\n", numero);
	} else {
		printf("O número NÂO pertence à sequência de Fibonacci.\n", numero);
	}
	
	return 0;
}