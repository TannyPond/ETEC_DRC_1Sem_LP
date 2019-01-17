#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 4 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que determine quanto sera gasto para encher o tanque" <<endl;
	cout <<"de um carro (VG), sabendo-se que o preco da gasolina eh de R$ 1.80 e o preco" <<endl;
	cout <<"do alcool eh de R$ 1.00. O usuario fornecera os seguintes dados: Tipo de carro" <<endl;
	cout <<"(TC - G- Gasolina ou A- alcool) e Capacidade do Tanque (CT), rm litros." <<endl <<endl;
			
	float VG, CT;
	int TC;
		
	cout << "Qual o seu carro? " <<endl <<endl;
	cout <<"1 - Gasolina" <<endl;
	cout <<"2 - Alcool" <<endl;
	cin >> TC;
	cout << endl;

	if (TC == 1)
	{
		cout <<"Digite a Capacidade do Tanque (L): ";
		cin >> CT;
		VG = CT * 1.80;
		cout <<"O valor gasto para encher o tanque sera: R$ " <<VG <<endl <<endl;
	}
	else{
		if(TC == 2)
		{		
			cout <<"Digite a Capacidade do Tanque (L): ";
			cin >> CT;
			VG = CT * 1.00;
			cout <<"O valor gasto para encher o tanque sera: R$ " <<VG <<endl <<endl;
		}else{
			cout <<"Tipo de Carro Invalido!";
		}
	}
	system ("pause");
}
