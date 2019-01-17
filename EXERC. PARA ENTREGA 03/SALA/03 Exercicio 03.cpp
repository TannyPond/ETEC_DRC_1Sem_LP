#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main ()
{
	cout <<"***** EXERCÍCIO 01 - SALA *****" <<endl <<endl;
	cout <<"E1P que exiba todos os numeros de 1 a 100";
	cout <<endl <<endl;
	
	int x;
	
	cout << "Numeros de 1 a 100: " <<endl <<endl;
	
	for (x=1; x <= 100; x++)
	{
		cout <<setw(4) <<x <<endl <<endl;
	}
	system ("pause");

}
