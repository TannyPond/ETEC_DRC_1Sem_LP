#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main ()
{
	cout <<"*********** EXERCÍCIO 05 - SALA ***********" <<endl <<endl;
	cout <<"E1P que exiba todos os 100 numeros de pares";
	cout <<endl <<endl;
	
	int x, contx = 0;
	
	cout << "100 primeiros numeros PARES" <<endl <<endl;
	
	for (x=1; x <= 100; x++)
	{
		contx = contx + 2;
		cout <<setw(4) <<contx <<endl <<endl;
	}
	system ("pause");
}
