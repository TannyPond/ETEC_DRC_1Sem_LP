#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main ()
{
	cout <<"*********** EXERCÍCIO 18 - SALA ***********" <<endl <<endl;
	cout <<"E1P em que o usuario entra com o numero de termos";
	cout <<"e o programa exibe a Sequencia de Fibonacci" <<endl <<endl;
	
	int x, t,at, ant;
	long int prox;
	
	at = 1;
	ant = 0;
	
	cout << "Digite quantos termos voce gostaria de exibir da" <<endl;
	cout <<"sequencia de Fibonacci: ";
	cin >> t;
	cout <<endl <<endl;
	
	for (x=1; x <= t; x++)
	{
		cout <<endl <<setw(5) <<at <<" " <<endl;
		prox = ant + at;
		ant = at;
		at = prox;
	}
	cout <<endl;	
	system ("pause");

}
