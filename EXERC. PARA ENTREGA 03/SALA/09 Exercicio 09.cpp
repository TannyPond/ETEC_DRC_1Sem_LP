#include<iostream>
#include<iomanip>
#include <math.h>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 09 - SALA *****************" <<endl;
	cout<<"E1P que exiba os numeros de 120 a 300" <<endl <<endl;
	
	int x;
	
	cout<<"Os numeros no intervalo de 120 a 300 sao: " <<endl <<endl;
	
	for (x=120; x <= 300; x++)
	{
		cout<< setw(3) <<x <<endl <<endl;
	}
	system("pause");
}
