#include<iostream>
#include<iomanip>
#include<cctype> //manipulação de caracteres
#include<windows.h>

using namespace std;

int main()
{
	int a[10], b[10];
	int i, teste;
	char letra; //caractere
	
	// as manipulações so são possiveis com a biblioteca iomanip
	cout<< setiosflags(ios::right); //alinhar a direita
	
	cout<< "Exemplo de Checagem de Indice" <<endl<<endl;
	
	//entrada de dados
	for(i=0; i<=9; i++)
	{
		cout<< "Informe o valor para o elemento de nr. " <<setw(2);
		cout<< i+1 <<" : ";
		cin >> a[i];
	}
	//processamento par e impar
	for(i=0; i <=9 ; i++)
	{
		teste = i%2;
		if(teste==0)
		{
			b[i] = a[i]*2;
		}
		else
		{
			b[i] = a[i]+2;
		}
	}
	
	//Apresentar os vetores
	for(i=0; i<=9; i++)
	{
		cout<< "\n\nA["<<setw(2) <<i+1 <<"] = " <<setw(3) <<a[i]; //mostrando os valores de a
		cout<<endl;
	}
	
	for(i=0; i<=9; i++)
	{
		cout<< "\n\nB["<<setw(2) <<i+1 <<"] = " <<setw(3) <<b[i]; //mostrando os valores de b
		cout<<endl;
	}
		
	//travando saida do usuario
	cout<< "\nTecla <X> + <Enter> para finalizar o programa= ";
	
	do
	{
		letra = cin.get(); //recebe o que o usuuaro digitar
		letra = toupper(letra); //transforma minusculo em maiusculo
	}
	while (letra != 'X');
	system("pause");
}

