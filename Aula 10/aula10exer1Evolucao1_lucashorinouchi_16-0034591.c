/*algoritmo aula10exer1Evolucao1;
// Aluno: Lucas Hiroshi Horinouchi
// Síntese
//  Objetivo:  exibir os valores pares de um intervalo numerico
//  Entrada : valor inicial
//  Saída   : numeros pares ate 2000


principal
	// Declarações
	inteiro limite; //CONSTANTE
	inteiro valor;

	// Instruções
	limite = 2000;
	escreva ("Digite um valor inteiro positivo: ");
	leia (valor);
	se (valor <= limite) entao
		se (valor%2 == 0) entao
			imprimePares (valor, limite);
		senao
			valor = valor + 1;
			imprimePares (valor, limite);
		fimSe
	senao
		escreval ("Valor digitado: ", valor);
		escreva ("O limite de cálculo foi excedido.");
	fimSe
fimPrincipal

//==================Subalgoritmos====================

// Objetivo: imprimir os valores pares
// Parâmetro: valor e limite
// Saída: valores pares impressos
procedimento imprimePares (inteiro valor, inteiro limite)

	//Declarações Locais:
	inteiro aux, contador;
	caracter a;
	// Instruções:
	contador = 0;
	para (aux de valor ate limite passo 2) faca
		escreval (aux);
		contador = contador +1;
		se (contador==100)entao
			escreval("Digite algo para continuar");
			leiaCaracter(a);
			contador = 0;
			limpaTela();
		fimSe
	fimPara
fimProcedimento*/


 #include <stdio.h>

void imprimePares (int valor, int limite);

int main ()
{
	// Declarações
	const int limite = 2000; //CONSTANTE
	int valor;
	// Instruções
	puts("Digite um valor inteiro positivo:");
	scanf("%i", &valor);
	if (valor <= limite)
	{
		if (valor%2 == 0)
		{
			imprimePares (valor, limite);
		}
		else
		{
			valor = valor + 1;
			imprimePares (valor, limite);
		}
	}
	else
	{
		printf("Valor digitado: %i", valor);
		printf("O limite de cálculo foi excedido.");
	}
	return 0;
}


//==================Subalgoritmos====================

// Objetivo: imprimir os valores pares
// Parâmetro: valor e limite
// Saída: sem retorno
void imprimePares (int valor, int limite)
{
	//Declarações Locais:
	int aux, contador;
	char a;
	// Instruções:
	contador = 0;
	for (aux = valor; aux<=limite; aux+=2)
	{
		printf ("%i - ", aux);
		contador = contador +1;
		if (contador==100)
		{
			printf("Digite algo para continuar");
			getch(a);
			contador = 0;
			system("cls");
		}
	}
}
