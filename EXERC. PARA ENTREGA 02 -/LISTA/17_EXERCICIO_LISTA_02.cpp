#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 17 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que tendo como dados de entrada o preco" <<endl;
	cout <<"de um produto (PR) e seu codigo de origem (CO), apresente o " <<endl;
	cout <<"preco e a sua procedencia." <<endl <<endl;
			
	float pr;
	int co;
	string proc;
		
	cout << "Digite o preco do produto: R$ ";
	cin >> pr;
	cout << endl;

	cout << "Digite o codigo de origem (1-5): " <<endl <<endl;
	cout <<"1 - Sul" <<endl;
	cout <<"2 - Sudeste" <<endl;
	cout <<"3 - Centro-Oeste" <<endl;
	cout <<"4 - Norte" <<endl;
	cout <<"5 - Nordeste" <<endl <<endl;
	cin >> co;
	cout << endl;
	
	switch (co)
	{
		case 1:
			proc = "SUL";
			cout <<endl <<"O valor do produto eh R$ " <<pr <<endl <<endl;
			cout <<"E ele eh do: " <<proc <<endl <<endl;
			break;
			
		case 2:
			proc = "SUDESTE";
			cout <<endl <<"O valor do produto eh R$ " <<pr <<endl <<endl;
			cout <<"E ele eh do: " <<proc <<endl <<endl;
			break;
		
		case 3:
			proc = "CENTRO-OESTE";
			cout <<endl <<"O valor do produto eh R$ " <<pr <<endl <<endl;
			cout <<"E ele eh do: " <<proc <<endl <<endl;
			break;
		
		case 4:
			proc = "NORTE";
			cout <<endl <<"O valor do produto eh R$ " <<pr <<endl <<endl;
			cout <<"E ele eh do: " <<proc <<endl <<endl;
			break;
		
		case 5:
			proc = "NORDESTE";
			cout <<endl <<"O valor do produto eh R$ " <<pr <<endl <<endl;
			cout <<"E ele eh do: " <<proc <<endl <<endl;
			break;
			
		default:
			cout <<endl <<"Codigo de Origem Invalido!" <<endl <<endl;
	}
		system ("pause");
}
