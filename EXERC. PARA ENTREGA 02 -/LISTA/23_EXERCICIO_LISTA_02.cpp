#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 23 - Lista 2******" <<endl <<endl;
	cout <<"Construa um algoritmo que indique o que o motorista deve fazer de acordo com " <<endl;
	cout <<"a cor do semaforo (CD) e distancia do cruzamento (CD) forncecida pelo usuario." <<endl <<endl;
			
	int cs;
	float dc;
	
	cout << "*********************************" <<endl;
	cout << "*            SEMAFORO           *" <<endl;
	cout << "*********************************" <<endl <<endl;
	cout << "*********************************" <<endl;
	cout << "*    1 para VERMELHO (RED)      *" <<endl;
	cout << "*    2 para AMAREDO (YELLOW)    *" <<endl;
	cout << "*    3 para VERDE (GREEN)       *" <<endl;
	cout << "*********************************";
	cout <<endl <<endl;
	cout << "Digite a cor do semaforo: ";
	cin >> cs;
	cout <<endl;
	
	if(cs >=1 && cs <=3)
	{
		if (cs==1)
		{
		cout <<endl <<"PARAR!" <<endl <<endl;
		}
		else
		{
			if(cs == 2)
			{
				cout <<endl <<"Digite a distancia do cruzamento (m): ";
				cin >> dc;
				cout <<endl;
			
				if(dc <5)
				{
					cout <<"Favor passar com cuidado!" <<endl <<endl;
				}
				else
				{
					cout <<"PARAR!" <<endl <<endl;
				}
			}
			else
			{
				cout <<"PASSAR!" <<endl <<endl;
			}
		}
	}
		else
		{
			cout <<"Cor Inavlida!" <<endl <<endl;
		}
	system ("pause");
}


	
