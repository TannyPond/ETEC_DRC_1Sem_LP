#include<iostream>
#include<iomanip>
#include <math.h>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 07 - SALA *****************" <<endl;
	cout<<"E1P que exiba o quadrado dos numeros de 1 a 20," <<endl <<endl;
	
	long int x, contx=0, contx2;
	
	//contx=0;
	
	for (x=1; x <= 20; x++)
	{
		contx++;
		contx2 = contx * contx;
		cout<<"O quadrado de " <<x <<" eh: " <<contx2 <<endl;
	}
	system("pause");
}
