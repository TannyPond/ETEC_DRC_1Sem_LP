#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	
	cout <<"***EXERCÍCIO 01 - SALA***" <<endl <<endl;
	cout <<"E1P que o usuário entre com um numero e o programa informa se o numero eh ou não divisivel por 5" <<endl <<endl;
	
	//declaração de variáveis
	int num, resto5;
	
	//Mensagem parao usuário
	cout <<"Digite um numero inteiro...  ";
	cin >> num; //receba e armazene o numero digitado na variavel num
	
	//processamento para descobri se o numero eh divisivel por 5 
	resto5 = num % 5;
	
	//incio da estrutura de decisão
	if (resto5 ==0)
	{
		//exibindo as mensagens da decisão ao usuario
		cout <<endl <<"O Numero " <<num <<" eh divisivel por 5!" <<endl <<endl; 
	} else{
		cout <<endl <<"O Numero " <<num <<" NAO eh divisivel por 5!" <<endl <<endl;
	}	
	system("pause");
}
