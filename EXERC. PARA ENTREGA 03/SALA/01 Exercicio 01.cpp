#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
	cout <<"***** EXERCÍCIO 01 - SALA *****" <<endl <<endl;
	cout <<"E1P que leia 5 valores para A, e conte quantos desses";
	cout <<"valores sao negativos." <<endl <<endl;
	
	int x;
	float A, contA=0;
	
	for (x=1; x <= 5; x++)
	{
		cout<< "Digite um numero: ";
		cin >> A;
		
		if (A < 0)
		{
			contA = contA + 1;
		}
	}
	cout <<endl <<"Existem: " <<contA <<" valores negativos." <<endl <<endl; 
		
	system ("pause");

}
