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
	
	cout <<"Leitura e apresentação de notas" <<endl <<endl;
	
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
	
	//Apresentando os valores
	
	for(i=0; i<=4; i++) // para manipulação de linhas com o i
	{
		cout <<"\n\nAs notas do ";
		cout <<i+1 <<"o. Aluno = " <<endl;
		
		for(j=0; j<=3; j++) // para manipular as colunas j
		{
			cout <<"Nota: " <<j+1 <<" = " <<setw(8); 
			cout << nota[i][j];
			cout <<endl;	
		}
	}
	cout <<endl;
	
	cout <<"Tecle <N> + <Enter> para finalizar o programa";
		do
		{
			letra = cin.get();
			letra = toupper(letra);
		}
		while (letra != 'N');
		
		system("pause");
		
}
