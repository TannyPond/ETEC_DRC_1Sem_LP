#include <iostream>
#include <windows.h>

using namespace std;

int main()

{
	cout << "****EXERCIO 13 - SALA****" << endl << endl << endl; 
	cout <<"Elabore um programa que leia o percurso em km, o tipo" <<endl;
	cout <<"de carro e informe o consumo estimado de combustivel" <<endl <<endl;
	
	float km, cons, car;
	
	cout <<"Tipo de Carro" <<endl <<endl;
	cout <<"1 = T1" <<endl;
	cout <<"2 = T2" <<endl;
	cout <<"3 = T3" <<endl;
	cout <<"Digite o tipo do seu carro: ";
	cin >> car;
	cout <<endl;
	
	if(car >=1 && car <=3)
	{
		if(car == 1)
		{
		cout <<"Digite o percuso percorrido (km): ";
		cin  >> km;
		
		cons = km / 12;
		
		cout <<endl <<"O consumo estimado de combustivel eh: " <<cons <<" litros" <<endl <<endl;
		}
		else
			{
			if(car == 2)
			{
				cout <<"Digite o percuso percorrido (km): ";
				cin  >> km;
		
				cons = km / 9;
		
				cout <<endl <<"O consumo estimado de combustivel eh: " <<cons <<" litros" <<endl <<endl;
			}
			else
				{
					if(car == 3)
					{
						cout <<"Digite o percuso percorrido (km): ";
						cin  >> km;
		
						cons = km / 8;
		
						cout <<endl <<"O consumo estimado de combustivel eh: " <<cons <<" litros" <<endl <<endl;
					}
				}
			}
		}
			else
			{
				cout <<endl <<"Tipo de carro inexistente." <<endl <<endl;
			}

			system ("pause");
}
					
		
	
