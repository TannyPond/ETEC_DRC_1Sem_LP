#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 11 - SALA *****************" <<endl;
	cout<<"E1P que o usuario entra com 10 numeros e o programa exiba a metade de cada numero" <<endl <<endl;
	
	int x;
	float n, res;
	
	for (x=1; x <= 10; x++)
	{
		cout<<"Digite um numero qualquer: ";
		cin>>n;
		res = n/2;
		cout<<"A metade de: " <<n <<" eh: " <<res <<endl <<endl;
	}
	system("pause");
}
