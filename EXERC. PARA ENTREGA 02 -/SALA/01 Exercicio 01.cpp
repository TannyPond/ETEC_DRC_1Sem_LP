#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	
	cout <<"***EXERC�CIO 01 - SALA***" <<endl <<endl;
	cout <<"E1P que o usu�rio entre com um numero e o programa informa se o numero eh ou n�o divisivel por 5" <<endl <<endl;
	
	//declara��o de vari�veis
	int num, resto5;
	
	//Mensagem parao usu�rio
	cout <<"Digite um numero inteiro...  ";
	cin >> num; //receba e armazene o numero digitado na variavel num
	
	//processamento para descobri se o numero eh divisivel por 5 
	resto5 = num % 5;
	
	//incio da estrutura de decis�o
	if (resto5 ==0)
	{
		//exibindo as mensagens da decis�o ao usuario
		cout <<endl <<"O Numero " <<num <<" eh divisivel por 5!" <<endl <<endl; 
	} else{
		cout <<endl <<"O Numero " <<num <<" NAO eh divisivel por 5!" <<endl <<endl;
	}	
	system("pause");
}
