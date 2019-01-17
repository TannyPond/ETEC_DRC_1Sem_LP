#include<iostream>
#include<iomanip>
#include <math.h>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 08 - SALA *****************" <<endl;
	cout<<"E1P que exiba os numeros pares de 1 a 600" <<endl <<endl;
	
	int x;
	
	cout<<"Os numeros pares no intervalo de 1 a 600 sao: " <<endl <<endl;
	
	for (x=2; x <= 600; x=x+2)
	{
		cout<< setw(3) <<x <<endl <<endl;
	}
	system("pause");
}
