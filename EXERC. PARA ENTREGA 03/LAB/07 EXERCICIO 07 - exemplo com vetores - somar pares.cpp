#include<iostream>
#include<iomanip>
#include<cctype> //manipulação de caracteres
#include<windows.h>

using namespace std;

int main()
{
	int a[10];
	int i, teste, soma=0, conta=0;
	char letra; //caractere
	
	// as manipulações so são possiveis com a biblioteca iomanip
	cout<< setiosflags(ios::right); //alinhar a direita
	
	cout<< "Exemplo de Checagem de Indice - Somando os Elementos pares" <<endl<<endl;
	
	//entrada de dados
	for(i=0; i <= 9; i++)
	{
		cout<< "Informe o valor para nr. " <<setw(2)<< i+1 <<" : ";
		cin >> a[i];
		
		teste = a[i]%2;
		if(teste == 0)
		{
			conta ++;
			soma = soma + a[i];
		}
	}
	
	cout<<endl <<endl;
	cout <<"Foram digitados: " <<conta <<" numeros pares" <<endl;
	cout <<"A soma dos numeros pares digitados eh: " <<soma <<endl <<endl;
		
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

