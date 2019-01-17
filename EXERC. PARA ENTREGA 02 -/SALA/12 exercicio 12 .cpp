#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
	// E1P que leia 3 numeros, os possiveis lados de um triangulo e exiba a sua classificação segundo os angulos
	// ACUTÂNGULO, OBTUSANGULO, RETANGULO
	cout << "****EXERCIO 12 - SALA****" << endl << endl << endl; 
	
	//declarando variáveis
	int A, B, C, l1, l2, l3, maior, lados;
	
	cout <<"Digite o lado <A>: "; 
	cin >> l1; //
	cout <<"Digite o lado <B>: "; 
	cin >> l2; //
	cout <<"Digite o lado <C>: "; 
	cin >> l3; //
	
	A = l2+l3;
	B = l1+l3;
	C = l1+l2;
	
	if(l1<A && l2<B && l3<C)
		{
			if(l1>l2 && l1>l3)
			{			
				maior = pow(l1,2);
				lados = ((pow(l2,2))+(pow(l3,2)));
			}
			else
			{
				if(l2>l3)
				{
					maior = pow(l2,2);
					lados = ((pow(l1,2))+(pow(l3,2)));
				}
				else
				{
					maior = pow(l3,2);
					lados = ((pow(l2,2))+(pow(l1,2)));
				}
			}
				if(maior == lados)
				{
					cout <<endl << "Triângulo Retangulo" <<endl <<endl;
				}
				else
				{
					if(maior>lados)
					{
						cout <<endl << "Triangulo Obtusangulo" <<endl <<endl;
					}
					else
					{
						cout <<endl << "Triangulo Acutangulo" <<endl <<endl;
					}
				}
		}
		else
		{
			cout <<endl <<"Nao forma Triangulo" <<endl <<endl;
		}
		system("pause");
}
