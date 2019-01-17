#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 20 - Lista 2******" <<endl <<endl;
	cout <<"Construa um algoritmo que, dados os comprimentos dos 3 lados de um triangulo," <<endl;
	cout <<"verifique o tipo de triangulo formado. Apresentar qual eh o tipo." <<endl <<endl;
			
	int A, B, C, l1, l2, l3;
	
	cout <<"Digite o lado <A>: "; 
	cin >> l1; 
	cout <<"Digite o lado <B>: "; 
	cin >> l2; 
	cout <<"Digite o lado <C>: "; 
	cin >> l3; 
	
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
	system ("pause");
}
