#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 11 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia  o codigo de um livro (CL) e apresente a" <<endl;
	cout <<"categroia do livro, conforme a tabela de categoria" <<endl <<endl;
			
	char CL;
		
	cout << "Digite o codigo do livro (A ou B): ";
	cin >> CL;
	cout << endl;

	if(CL == 'A' || CL =='a')
		{
			cout <<"A Categoria " <<CL <<" eh Ficcao";
			cout <<endl <<endl; 
		}else
			{
				if (CL == 'B' || CL == 'b')
				{
					cout <<"A Categoria " <<CL <<" eh Nao-Ficcao";
					cout << endl <<endl;
				} 
				else
				{
					cout <<"INVALIDO";
					cout << endl <<endl;
				}
			}
	system ("pause");
}
