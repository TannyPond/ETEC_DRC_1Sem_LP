#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout << "****EXERCIO 5 - SALA****" << endl << endl << endl; 
	cout <<"Programa em que o usuario entra com 3 numeros e armazena em variaveis com os seguintes nome:" <<endl;
	cout <<"MAIOR, INTERMEDIARIO, MENOR. SUPONHA NÚMEROS DIFERENTES." <<endl <<endl;
	
	//declarando variáveis
	int A, B, C, maior, inter, menor;
		
	cout <<"Digite um numero qualquer: "; //Mensagem para o usuário digitar um numero
	cin >> A; //armazendando numero 1
	cout <<"Digite um numero qualquer: "; //Mensagem para o usuário digitar um numero
	cin >> B; //armazendando numero 2
	cout <<"Digite um numero qualquer: "; //Mensagem para o usuário digitar um numero
	cin >> C; //armazendando numero 3
	
	//Inicio da Estrutura de Decisão
	if(A > B)
	{
		if(C > A)
		{
			maior = C;
			inter = A;
			menor = B;
		}
		else
		{
			if(C > B)
			{
				maior = A;
				inter = C;
				menor = B;	
			}
			else
			{
				maior = A;
				inter = B;
				menor = C;
			}
		}
	}
	else
	{
		if(C > B)
		{
			maior = C;
			inter = B;
			menor = A;			
		}
		else
		{
			if(C > A)
			{
				maior = B;
				inter = A;
				menor = A;
			}
			else
			{
				maior = B;
				inter = A;
				menor = C;
			}
		}
	}

	cout <<endl <<"O MAIOR numero eh: " <<maior <<endl <<endl;
	cout <<endl <<"O numero INTERMEDIARIO eh: " <<inter << endl <<endl;
	cout <<endl <<"O MENOR numero eh: " <<menor <<endl <<endl;
	
	system("pause");
}					
	
