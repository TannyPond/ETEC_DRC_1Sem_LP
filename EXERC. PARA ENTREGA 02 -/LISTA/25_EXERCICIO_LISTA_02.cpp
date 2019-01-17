#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	//Programa para calcular as horas em um estacionamnto
	cout <<"****** Exercicio 25 - Lista 2******" <<endl <<endl;
			
	int HE, ME, HS, MS, PF, V;
	float res;
	
	cout << "Digite a hora da entrada: ";
	cin >> HE;
	cout << "Digite o minuto da entrada: ";
	cin >> ME;
	cout << "Digite a hora da saida: ";
	cin >> HS;
	cout << "Digite o minuto da saida: ";
	cin >> MS;

	if(HE <= 0 || HS <= 0 || HE > HS || HE > 24 || HS > 24 || ME < 0 || ME > 59 || MS < 0 || MS > 59)
	{

		cout <<endl <<"Valor invalido!" <<endl <<endl;
	}
	else
	{
		res=(((HS * 60) + MS) - ((HE * 60) + ME));
		
		if(res <= 60)
		{
			cout <<endl <<"O valor a ser pago sera: R$ 4.00" <<endl <<endl;
		}
		else
		{
			if(res <= 120)
			{
				cout <<endl <<"O valor a ser pago sera: R$ 6.00" <<endl <<endl;	
			}
			else
			{
				PF = res - 120;
				res = PF / 60;
				V = PF % 60;
				if(V != 0)
				{
					PF=(res + 1) + 6;
				}
				else
				{
					PF = res + 6;
				}	
				cout <<endl <<"O valor a ser pago sera: R$ " <<PF <<endl <<endl;
			}
		}
	}
	system("pause");
}
