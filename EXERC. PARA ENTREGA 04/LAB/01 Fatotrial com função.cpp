#include <windows.h>
#include <cctype>
#include <iostream>

using namespace std;

//Declara a função
int fatorial(int n);
int pausa();

//Programa principal
int main()
{
	int x;
	
	cout <<"\nCalculo de Fatorial\n" <<endl <<endl;
	cout <<"Entre com um valor inteiro: " ;
	cin >> x;
	
	cout <<"\nFatorial de " <<x <<" = a: " <<fatorial(x) <<endl;
	pausa(); 
}

//Funcao 1 )fatorial)
int fatorial(int n)
{
	int i;
	int fat = 1;
	
	for(i=1; i <= n; i++) //fatorial com n declarado que recebe o valor de x para efetuar e retornar o valor
	{
		fat *= i;
	}
	return fat;
}

//Função 2 - Pausa
int pausa()
{
	char letra;
	cout <<endl;
	cout <<"Tecle <S> + <ENTER> para finalizar ...." ;
	
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'S');
	return 0;
}
