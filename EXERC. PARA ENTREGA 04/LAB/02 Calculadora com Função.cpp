#include <windows.h>
#include <cctype>
#include <iostream>

using namespace std;

//Declara a função
int soma(int n);
int diferenca(int n);
int multiplicacao(float n);
int divisao(float n);
int pausa();

//Programa principal
int main()
{
	int x,y;
	
	cout <<"*********************** "<<endl;
	cout <<"\nCALCULADORA SIMPLES\n*" <<endl;
	cout <<"\nEscolha a operacao  *" <<endl;
	cout <<" 1 >>> SOMA           *" <<endl;
	cout <<" 2 >>> SUBTRACAO      *" <<endl;
	cout <<" 3 >>> MULTIPLICACAO  *" <<endl;
	cout <<" 4 >>> DIVISAO        *" <<endl;
	cout <<" S >>> SAIR           *" <<endl;
	cout <<"***********************" <<endl <<endl;
	
	switch:
		{
			case 1:
				cout <<"Digite numero 1: ";
				cin  >> x;
				cout <<"Digite numero 2: ";
				cin  << y;
				soma(n);
				cout << "A soma eh: " <<soma(x, y) <<endl <<endl;
				break;
			
			case 2:
				cout <<"Digite numero 1: ";
				cin  >> x;
				cout <<"Digite numero 2: ";
				cin  << y;
				diferenca(x,y);
				cout << "A Subtracao eh: " <<diferenca(x,y) <<endl <<endl;
				break;
			
			case 3:
				cout <<"Digite numero 1: ";
				cin  >> x;
				cout <<"Digite numero 2: ";
				cin  << y;
				multiplicacao(x,y);
				cout << "A Multiplicacao eh: " <<multiplicacao(x,y) <<endl <<endl;
				break;
				
			case 4:
				cout <<"Digite numero 1: ";
				cin  >> x;
				cout <<"Digite numero 2: ";
				cin  << y;
				divisao(x,y);
				cout << "A Divisao eh: " <<divisao(x,y) <<endl <<endl;
				break;
			
			case 5:
				pausa();
			
			default:
			cout <<endl;
			cout << "Operacao Invalida!" <<endl <<endl;
			break;
		}
			
	
	pausa(); 
}

//Funcao 1 )fatorial)
int soma(int i, j)
{
	int n1,n2, res;
	res = n1 + n2;
	return res;
}

int diferenca(int i, j)
{
	int n1,n2, res;
	res = n1 - n2;
	return res;
}

int multiplicacao(int i, j)
{
	int n1,n2, res;
	res = n1 * n2;
	return res;
}

int divisao(int i, j)
{
	int n1,n2, res;
	if(n2==0)
	{
		cout <<endl;
		cout <<"Divisao nao eh possivel!" <<endl <<endl;
		}else{
		res = n1/n2;	
	return res;
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
