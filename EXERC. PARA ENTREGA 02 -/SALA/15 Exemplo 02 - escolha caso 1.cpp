#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	char op;
	float n1, n2, res;
	
	cout << "*********************************" <<endl;
	cout << "*      CALCULADORA BASICA       *" <<endl;
	cout << "*********************************" <<endl <<endl;
	cout << "*********************************" <<endl;
	cout << "*           Soma (+)            *" <<endl;
	cout << "*           Subtracao (-)       *" <<endl;
	cout << "*           Multiplicacao (*)   *" <<endl;
	cout << "*           Divisao (/)         *" <<endl;
	cout << "*********************************";
	cout <<endl <<endl;
	cout << "Digite a operacao desejada: ";
	cin >> op;
	cout <<endl;
		
	switch (op) //escolha, caso
	{
		case '+':
			cout << "Digite o primeiro numero: ";
			cin >> n1;
			cout << "Digite o segundo numero: ";
			cin >> n2;
			res = n1 + n2;
			cout <<endl;
			cout << "A soma eh: " <<res <<endl <<endl;
		break; //pára no caso 1
		case '-':
			cout << "Digite o primeiro numero: ";
			cin >> n1;
			cout << "Digite o segundo numero: ";
			cin >> n2;
			res = n1 - n2;
			cout <<endl;
			cout <<"A subtracao eh: " <<res <<endl <<endl;
		break; //pára no caso 1
		case '*':
			cout << "Digite o primeiro numero: ";
			cin >> n1;
			cout << "Digite o segundo numero: ";
			cin >> n2;
			res = n1 * n2;
			cout <<endl;
			cout <<"A Multiplicacao eh: " <<res <<endl <<endl;
		break; //pára no caso 1
		case '/':
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

