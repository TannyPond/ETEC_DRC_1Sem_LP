#include<iostream>
#include<iomanip>
#include<math.h>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 12 - SALA *****************" <<endl;
	cout<<"E1P que o usuario entra com 10 numeros e o programa exiba o quadrado de cada numero" <<endl <<endl;
	
	int x;
	float n, res;
	
	for (x=1; x <= 10; x++)
	{
		cout<<"Digite um numero qualquer: ";
		cin>>n;
		res = pow(n, 2);
		cout<<"O quadrado de: " <<n <<" eh: " <<res <<endl <<endl;
	}
	system("pause");
}
