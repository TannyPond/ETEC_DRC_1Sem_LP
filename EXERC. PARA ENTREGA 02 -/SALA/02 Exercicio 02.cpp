#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"***EXERCICIO 02***" <<endl <<endl;
	cout <<"E1P em que o usuário entra com um numero inteiro de 3 casas decimais (CDU) e ele exibe se o algorismo da" <<endl;
	cout <<"casa das centenas é par ou impar" <<endl <<endl;
	
	//declaração de variáveis
	int num, cent, resto;
	
	//Mensagem para o usuário
	cout <<"Digite um numero inteiro com 3 casas decimais:  ";
	cin >> num; //receba e armazene o numero digitado na variavel num
	
	//processamento para separar a casa das centenas do restante do numero e descobrir se ele é par 
	cent = num / 100;
	resto = cent % 2;
	
	//incio da estrutura de decisão
	if (resto ==0)
	{
		//exibindo as mensagens da decisão ao usuario
		cout <<endl <<"A casa das centenas do numero " <<num <<" eh PAR!" <<endl <<endl; 
	} else{
		cout <<endl <<"A casa das centenas do numero " <<num <<" eh IMPAR!" <<endl <<endl;
	}	
	system("pause");
}
