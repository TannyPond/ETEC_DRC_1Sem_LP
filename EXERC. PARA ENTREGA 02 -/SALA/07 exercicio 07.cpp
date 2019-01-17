#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main()
{
	cout << "****EXERCIO 7 - SALA****" << endl << endl << endl; 
	cout <<"Elabore um programa que deixe entrar com 2 numeros e exiba o " <<endl;
	cout <<"quadrado do menor numero e a raiz quadrada do maior, se possivel." <<endl <<endl;
	
	//declarando variáveis
	int A, B, raiz, pot;
	
	cout <<"Digite um numero: ";
	cin >>A;
	cout <<"Digite outro numero: ";
	cin >>B;
	cout <<endl;
	
	if (A > B)
	{
		raiz = sqrt(A);
		pot = pow(B,2);
		cout << "A raiz quadrada de: " <<A <<" eh: " <<raiz <<endl;
		cout <<"A potencia de: " <<B <<" eh " <<pot <<endl <<endl;
	}
	else
	{
		if(B > A)
		{
		raiz = sqrt(B);
		pot = pow(A,2);
		cout << "A raiz quadrada de: " <<B <<" eh: " <<raiz <<endl;
		cout <<"A potencia de: " <<A <<" eh: " <<pot <<endl <<endl;
	}
	else
	{
		cout <<"Impossivel" <<endl <<endl;
	}
}

system ("pause");
}

			
		
