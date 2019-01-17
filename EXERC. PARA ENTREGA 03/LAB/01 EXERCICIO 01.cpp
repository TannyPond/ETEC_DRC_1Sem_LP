#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
	cout <<"*********** EXERCÍCIO 01 - LABORATORIO ***********" <<endl <<endl;
	cout <<"E1P que leia um numero e faca o fatorial desse numero";
	cout <<endl <<endl;
	
	int n, x;
	long fat=1;
	
	cout<< "Digite o valor da fatorial: ";
	cin >> n;
	
	for (x=1; x <= n; x++)
	{
		fat = fat * x;
	}
	cout <<endl <<"Fatorial de " <<n <<"! = " <<fat <<endl <<endl; 
	
	system ("pause");

}
