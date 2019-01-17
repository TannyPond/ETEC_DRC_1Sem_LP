#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main ()
{
	cout <<"***** EXERCÍCIO 04 - SALA *****" <<endl <<endl;
	cout <<"E1P que exiba todos os numeros de 100 a 1";
	cout <<endl <<endl;
	
	int x;
	
	cout << "Numeros de 1000 a 1 " <<endl <<endl;
	
	for (x=100; x >= 1; x--)
	{
		cout <<setw(4) <<x <<endl <<endl;
	}
	system ("pause");
}
