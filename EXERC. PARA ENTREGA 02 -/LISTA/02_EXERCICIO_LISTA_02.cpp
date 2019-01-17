#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 2 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia o valor de uma conta de luz (CL)" <<endl;
	cout <<"e, caso seja maior que R$ 50.00 apresente a mensagem: Voce esta gastando" <<endl;
	cout <<"muito!. Caso contrario nao exiba a mensagem: Seu gasto foi normal!." <<endl <<endl;
	
	float CL;
	
	cout <<"Digite o valor da sua conta de luz: R$ ";
	cin >> CL;
	
	if (CL > 50)
	{
		cout <<endl;
		cout <<"Voce esta gastando muito!" <<endl <<endl;
	} else{
		cout <<endl;
		cout <<"Seu gasto foi normal!" <<endl <<endl;		
	}
	system ("pause");
}
