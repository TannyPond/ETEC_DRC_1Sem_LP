#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int semana; // Programa dos dias da semana usando switch case
	
	cout << "Entre com um numero que equivale a um dia da semana: ";
	cin >> semana;
	cout <<endl;
	
	switch (semana) //escolha, caso
	{
		case 1:
			cout << "Domingo! Pode dormir ate mais tarde";
		break; //p�ra no caso 1
		case 2:
			cout << "Segunda-feira! Levanta pra cuspir";
		break; //p�ra no caso 1
		case 3:
			cout << "Terca-feira! Mais um dia, bora lah";
		break; //p�ra no caso 1
		case 4:
			cout << "Quarta-feira! Estamos no meio!";
		break; //p�ra no caso 1
		case 5:
			cout << "Quinta-feira! Quase lah";
		break; //p�ra no caso 1
		case 6:
			cout << "Sexta-feira! Happy Hour";
		break; //p�ra no caso 1
		case 7:
			cout << "Sabado! Uffa!";
		break; //p�ra no caso 
		default:
			cout << "Dia da semana invalido!";
		break;
	}
} 
