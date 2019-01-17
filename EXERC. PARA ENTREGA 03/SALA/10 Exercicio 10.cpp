#include<iostream>
#include<iomanip>
#include <math.h>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 10 - SALA *****************" <<endl;
	cout<<"E1P que exiba os numeros de 1 a 100 e exiba a soma de todos eles." <<endl <<endl;
	
	int x, res=0;
	
	cout<<"Os numeros de 1 a 100 sao: " <<endl <<endl;
	
	for (x=1; x <= 100; x++)
	{
		res = res + x;
		cout<< setw(3) <<x <<endl <<endl;
	}
	cout<<"E a soma destes numeros eh: " <<res <<endl <<endl;
	system("pause");
}
