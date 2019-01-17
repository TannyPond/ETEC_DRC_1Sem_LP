#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	//Programa para calcular o valor a ser pago em um estacionnamento
	cout <<"****** Exercicio 24 - Lista 2******" <<endl <<endl;
			
	int HE, ME, HS, MS, V, R;
	float PF;

	cout << "Digite a hora de entrada: ";
	cin >> HE;
	cout << "Digite o minuto de entrada: ";
	cin >> ME;
	cout << "Digite a hora de saida: ";
	cin >> HS;
	cout << "Digite o minuto de saida: ";
	cin >> MS;

	if(HE <= 0 || HS <= 0 || HE > HS || HE > 24 || HS > 24 || ME < 0 || ME > 59 || MS < 0 || MS > 59)
	{
		cout << "\t\t\tValor invalido!";
	}
	else
	{
		R =(((HS * 60) + MS) - ((HE * 60) + ME));
		PF = R / 60;
		V = R % 60;
		
		if( V!= 0)
		{
			R = (PF + 1) * 4;
		}
		else
		{
			R = PF*4;
		}
		cout <<endl <<"O valor a ser pago sera R$ " <<R <<endl <<endl;
	}
	system ("pause");
}
