#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 10 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia dois numeros (A e B). Caso A seja igual a B," <<endl;
	cout <<"apresentar a soma dos dois. Caso um seja maior que o outro, apresentar a " <<endl;
	cout <<"diferenca entre os dois numeros (sempre lembrando que a diferenca entre " <<endl;
	cout <<"dois numeros eh SEMPRE positiva" <<endl <<endl <<endl;
			
	float A, B, r;
		
	cout << "Digite um numero: ";
	cin >> A;
	cout << endl;

	cout << "Digite outro numero ";
	cin >> B;
	cout << endl;
	
	
	if(A > B)
		{
			r = A - B;
			cout << endl;
		}else
			{
				if (A < B)
				{
					r = B - A;
				} 
				else
				{
					r = A + B;
				}
			}
	cout <<"O resultado eh: " <<r <<endl <<endl;
	system ("pause");
}
