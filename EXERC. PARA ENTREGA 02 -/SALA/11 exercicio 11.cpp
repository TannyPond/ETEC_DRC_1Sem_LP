#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	// E1P que leia 3 numeros,os possiveis lados de um triangulo e exiba a sua classificação segundo os lados
	// ESCALENO, ISCOSCELES E EQUILÁTERO
	cout << "****EXERCIO 11 - SALA****" << endl << endl << endl; 
	
	//declarando variáveis
	int A, B, C, l1, l2, l3;
	
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
		if(l1==l2 && l3==l2)
		{
			cout <<endl <<"Este eh um Triangulo Equilatero"<<endl <<endl;
		}
		else
		{
			if(l1==l2 || l1==l3 || l3==l2)
			{
				cout <<endl <<"Este eh um Triangulo Isosceles"<<endl <<endl;
			}
			else
			{
				cout <<endl <<"Este eh um Triangulo Escaleno"<<endl <<endl;
			}
		}
	}
	else
	{
		cout <<endl <<"Nao forma Triangulo" <<endl <<endl;	
	}
	system("pause");
}
