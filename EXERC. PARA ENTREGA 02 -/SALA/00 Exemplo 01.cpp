#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int num, resto; //declaração das variaveis
	
	cout <<"***EXEMPLO 1 - ESTRUTURA DE DECISAO***" <<endl <<endl;  
	cout <<"E1P no qual informa se o numero digitado pelo usuario é impar ou par" <<endl <<endl <<endl; 
	
	cout <<"Digite um numero inteiro...  "; //mensagem ao usuário
	cin >> num; // receba e guarde o numero digitado
	resto = num % 2; //realização da operação que irá confirmar se o numero eh impar ou par
	// Inicio da estrutura de decisão
	if (resto ==0)  
	{
		cout <<endl <<"Numero par!"<<endl <<endl;
	} else{
		cout <<endl <<"Numero Impar!" <<endl <<endl;
	}	
	system("pause");
}
