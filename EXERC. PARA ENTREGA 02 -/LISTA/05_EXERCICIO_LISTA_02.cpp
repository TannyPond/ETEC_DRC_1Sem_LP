#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 5 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia um numero inteiro (positivo ou negativo)" <<endl;
	cout <<"e apresente o seu modulo (numero sem sinal" <<endl <<endl;
	
	int n1, m;
	
	cout <<"Digite um numero inteiro qualquer: ";
	cin >> n1;
	cout <<endl;
	
	if (n1 >= 0)
	{
		cout << "O modulo de " <<n1 <<" eh: " <<n1 <<endl <<endl;
	} else{
		m = (n1 * (-1));
		cout << "O modulo de " <<n1 <<" eh: " <<m <<endl <<endl;
	}
	system ("pause");
}
