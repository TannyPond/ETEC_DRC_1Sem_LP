#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 7 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que, recebendo os valores de vendas de determiando" <<endl;
	cout <<"vendedor(VM) e o nome do mesmo (NOME), apresente o nome, quando o valor" <<endl;
	cout <<"da venda estiver entre R$ 10.000,00 e R$ 50.000,00 (inclusive)" <<endl <<endl;
	
	float VM;
	string nome;
	
	cout <<"Digite o nome do vendedor: ";
	cin >> nome;
	cout <<endl;
	
	cout <<"Digite o valor da venda do mes: R$ ";
	cin >> VM;
	cout <<endl;
	
	if (VM >= 10000.00 && VM <=50000.00)
	{
		cout << "O nome do vendedor eh: " <<nome <<" e o valor vendido foi de R$ " <<VM <<endl <<endl;
	}
	system ("pause");
}
