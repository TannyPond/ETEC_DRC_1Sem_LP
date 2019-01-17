#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout << "****EXERCICIO 15 - SALA****" << endl << endl << endl; 
	cout <<"Elabore um programa em que o usuario escolhe um numero e o programa" <<endl;
	cout <<"retorna qual eh o dia da semana." <<endl <<endl;
		
	int semana; // Programa dos dias da semana usando switch case
	
	cout << "Entre com um numero que equivale a um dia da semana: ";
	cin >> semana;
	cout <<endl;
	
	switch (semana) //escolha, caso
	{
		case 1:
			cout << "Domingo! Pode dormir ate mais tarde" <<endl <<endl;
		break; //pára no caso 1
		case 2:
			cout << "Segunda-feira! Primeiro dia da semana! Chega de Preguica!" <<endl <<endl;
		break; //pára no caso 1
		case 3:
			cout << "Terca-feira! Bora trabaiá!" <<endl <<endl;
		break; //pára no caso 1
		case 4:
			cout << "Quarta-feira! Estamos na metade da semana!" <<endl <<endl;
		break; //pára no caso 1
		case 5:
			cout << "Quinta-feira! Quase lah!" <<endl <<endl;
		break; //pára no caso 1
		case 6:
			cout << "Sexta-feira! OBA! Happy Hour!" <<endl <<endl;
		break; //pára no caso 1
		case 7:
			cout << "Sabado! Uffa! Pode relaxar!" <<endl <<endl;
		break; //pára no caso 
		default:
			cout << "Esse dia da semana nao existe!" <<endl <<endl;
		break;
	}
	system ("pause");
} 
