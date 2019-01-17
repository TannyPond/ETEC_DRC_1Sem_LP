#include<iostream>
#include<iomanip>
#include<math.h>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 13 - SALA *****************" <<endl;
	cout<<"E1P que o usuario entra com 4 numeros e o programa exibe o cubo e a raiz" <<endl;
	cout<<"cubida de cada nuemro" <<endl <<endl; 
	
	int x;
	float n, raiz, cubo;
	
	for (x=1; x <= 4; x++)
	{
		cout<<"Digite um numero qualquer: ";
		cin>>n;
		cubo = pow(n,3);
		raiz = pow(n, 1.0/3.0);
		cout<<"O cubo e a raiz cubica de: " <<n <<" sao: " <<cubo <<" e " <<raiz <<endl <<endl;
	}
	system("pause");
}
