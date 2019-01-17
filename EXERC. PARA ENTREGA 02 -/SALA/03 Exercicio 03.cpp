#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"***EXERCICIO 03***" <<endl <<endl;
	cout <<"E1P que leia um nuemro inteiro de 4 casas e exiba se é ou não multiplo de 4 o numero formado" <<endl;
	cout <<"pelos algarismos que estão nas casas decimais que estão nas casas das UNIDADES DE MILHAS e das CENTENAS" <<endl <<endl;
	
	//declaração de variáveis
	int num, unmilhar, cent, num2, resto;
	
	//Mensagem para o usuário
	cout <<"Digite um numero inteiro com 4 casas decimais:  ";
	cin >> num; //receba e armazene o numero digitado na variavel num
	
	//processamento para separar a casa das centenas do restante do numero e descobrir se ele é par 
	unmilhar = num / 1000;
	cent = (num%1000) / 100;
	num2 = (unmilhar*10) + cent;
	resto = num2 % 4;
	
	//incio da estrutura de decisão
	if (resto ==0)
	{
		//exibindo as mensagens da decisão ao usuario
		cout <<endl <<"A casa das unidades de milhar e das centenas do numero " <<num <<" eh divisivel por 4!" <<endl <<endl; 
	} else{
		cout <<endl <<"A casa das unidades de milhar e das centenas do numero " <<num <<" eh divisivel por 4!" <<endl <<endl;
	}	
	system("pause");
}
