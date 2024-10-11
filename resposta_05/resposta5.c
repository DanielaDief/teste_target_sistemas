// 5) Escreva um programa que inverta os caracteres de um string.

// IMPORTANTE:
// a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
// b) Evite usar funções prontas, como, por exemplo, reverse;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "");
	
	char str[100];
	char inverteStr[100];
	int tamStr = 0;
	int i;
	
	printf("Digite uma string que deseja inverter:\n");
	fgets(str, sizeof(str), stdin); //lê com espaço
	
	//calcula o comprimento da string
	while (str[tamStr] != '\0'){
		if(str[tamStr] == '\n'){
		   str[tamStr] = '\0';
		   break;	
		}
		tamStr++;
	}
	
	// Invertendo a string
    for (i = 0; i < tamStr; i++) {
        inverteStr[i] = str[tamStr - i - 1]; // Atribui os caracteres na ordem invertida
    }
    inverteStr[tamStr] = '\0'; // Adiciona o caractere nulo ao final

    // Exibindo a string invertida
    printf("A string invertida é: %s\n", inverteStr);
	
	return 0;
}