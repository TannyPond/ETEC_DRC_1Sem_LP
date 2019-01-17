#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int op;
	float n1, n2, res;
	
	cout << "*********************************" <<endl;
	cout << "*      CALCULADORA BASICA       *" <<endl;
	cout << "*********************************" <<endl <<endl;
	cout << "*********************************" <<endl;
	cout << "*    1 para Soma (+)            *" <<endl;
	cout << "*    2 para Subtracao (-)       *" <<endl;
	cout << "*    3 para Multiplicacao (*)   *" <<endl;
	cout << "*    4 para Divisao (/)         *" <<endl;
	cout << "*********************************";
	cout <<endl <<endl;
	cout << "Digite a operacao desejada: ";
	cin >> op;
	cout <<endl;
		
	switch (op) //escolha, caso
	{
		case 1:
			cout << "Digite o primeiro numero: ";
			cin >> n1;
			cout << "Digite o segundo numero: ";
			cin >> n2;
			res = n1 + n2;
			cout <<endl;
			cout << "A soma eh: " <<res <<endl <<endl;
		break; //pára no caso 1
		case 2:
			cout << "Digite o primeiro numero: ";
			cin >> n1;
			cout << "Digite o segundo numero: ";
			cin >> n2;
			res = n1 - n2;
			cout <<endl;
			cout <<"A subtracao eh: " <<res <<endl <<endl;
		break; //pára no caso 1
		case 3:
			cout << "Digite o primeiro numero: ";
			cin >> n1;
			cout << "Digite o segundo numero: ";
			cin >> n2;
			res = n1 * n2;
			cout <<endl;
			cout <<"A Multiplicacao eh: " <<res <<endl <<endl;
		break; //pára no caso 1
		case 4:
			cout << "Digite o primeiro numero: ";
			cin >> n1;
			cout << "Digite o segundo numero: ";
			cin >> n2;
				if(n2==0)
				{
					cout <<endl;
					cout <<"Divisao nao eh possivel!" <<endl <<endl;
				}else{
					res = n1 / n2;
					cout <<endl;
					cout <<"A Divisao eh: " <<res <<endl <<endl;
				}
		break; //pára no caso 1
		default:
			cout <<endl;
			cout << "Operacao Invalida!" <<endl <<endl;
		break;
	}
	system ("pause");
} 
