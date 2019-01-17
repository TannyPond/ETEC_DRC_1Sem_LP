#include <iostream>
#include <iomanip> //manipulação de tela
#include <cctype> //utilização de caracteres
#include <windows.h>

using namespace std;

int main()
{
	int a[5];
	int i, j, x;
	char letra;
	
	cout <<"Leitura e apresentação ordenada de valores:" <<endl <<endl;
	
	//Entrada de Valores
	
	for(i=0; i<=4; i++)
	{
		cout <<"Informe o " <<setw(2) <<i+1 <<"o. Valor = ";
		cin >> a[i];
	}
	cout <<endl;
	
	//Classificação dos valores
	
	for(i=0; i<=3; i++)
		for(j = i+1; j<=4; j++)
			if(a[i] < a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
	//Apresentando os valores
	
		for(i=0; i<=4; i++)
		{
		cout <<setw(2) <<i+1 <<"o. Valor = " <<setw(4) <<a[i] <<endl;
		}
		cout <<endl;
		cout <<"Tecle <C> + <Enter> para finalizar o programa";
		do
		{
			letra = cin.get();
			letra = toupper(letra);
		}
		while (letra != 'C');
		
		system("pause");
		
}
