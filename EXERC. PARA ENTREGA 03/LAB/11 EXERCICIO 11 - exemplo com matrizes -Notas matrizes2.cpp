#include <iostream>
#include <iomanip> //manipulação de tela
#include <cctype> //utilização de caracteres
#include <windows.h>

using namespace std;

int main()
{
	float nota[5][4]; // matriz linhaXcoluna
	int i, j;
	char letra;
	
	cout <<"Leitura e apresentação de notas2" <<endl <<endl;
	
	//Entrada de Valores
	
	for(i=0; i<=4; i++) // para manipulação de linhas com o i
	{
		cout <<"\nInforme as notas do " <<setw(2);
		cout <<setw(2) <<i+1 <<"o. Aluno = " <<endl;
		
		for(j=0; j<=3; j++) // para manipular as colunas j
		{
			cout <<"Nota: " <<j+1 <<" = "; 
			cin >> nota[i][j];
			//cout <<endl;	
		}
	}
	cout <<endl <<endl;
	
	//Apresentando os valores
	
	cout << setw(6) <<"Aluno";
	cout << setw(9) <<"Nota1";
	cout << setw(9) <<"Nota2";
	cout << setw(9) <<"Nota3";
	cout << setw(9) <<"Nota4";
	cout <<endl;
	
	for(i=0; i<=4; i++) // para manipulação de linhas com o i
	{
		cout << setw(6) <<i+1;
		for(j=0; j<=3; j++) // para manipular as colunas j
		{
			cout << setw(9) << nota[i][j];	
		}
		cout <<endl;
	}
	cout <<endl;
	
	cout <<"Tecle <N> + <Enter> para finalizar o programa: ";
		do
		{
			letra = cin.get();
			letra = toupper(letra);
		}
		while (letra != 'N');
		
		system("pause");
		
}
