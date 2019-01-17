#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main ()
{
	cout <<"*********** EXERCÍCIO 06 - SALA ***********" <<endl <<endl;
	cout <<"E1P que exiba multiplo de 5 no intervalo de 1 a 500";
	cout <<endl <<endl;
	
	int x, contx = 0;
	
	cout << "Multiplos de 5" <<endl <<endl;
	
	for (x=1; x <= 500; x++)
	{
		contx = contx + 5;
		cout <<setw(4) <<contx <<endl <<endl;
	}
	system ("pause");
}
