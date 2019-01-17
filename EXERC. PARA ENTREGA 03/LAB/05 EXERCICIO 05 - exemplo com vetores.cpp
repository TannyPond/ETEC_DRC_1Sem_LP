#include<iostream>
#include<iomanip>
#include<cctype> //manipulação de caracteres
#include<windows.h>

using namespace std;

int main()
{
	float soma=0, media;
	float md[8]; //vetor
	int i;
	char letra; //caractere
	
	// as manipulações so são possiveis com a biblioteca iomanip
	cout<< setprecision(2); //delimitar numero de casas decimais
	cout<< setiosflags(ios::right); //alinhar a direita
	cout<< setiosflags(ios::fixed); //fixa o valor da casa decimal
	
	cout<< "Calculo de media escolar" <<endl<<endl;
	
	soma = 0;
	
	for(i=0; i<=7; i++)
	{
		cout<< "Informe a " <<i+1 <<".a Nota= ";
		cin>> md[i];
		soma += md[i]; //ou soma = soma + md[i], como acumulador 
	}
	media = soma/8;
	cout <<endl <<"A media do grupo equivale a: " <<setw(8);
	cout <<media <<endl;
	
	//travando a saida do usuario
	cout<< "\nTecla <F> + <Enter> para finalizar o programa= ";
	
	do
	{
		letra = cin.get(); //recebe o que o usuuaro digitar
		letra = toupper(letra); //transforma minusculo em maiusculo
	}
	while (letra != 'F');
	system("pause");
}

