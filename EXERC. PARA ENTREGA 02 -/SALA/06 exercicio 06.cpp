#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout << "****EXERCIO 6 - SALA****" << endl << endl << endl; 
	cout <<"Programa em que o usuario entra com 3 numeros e o programa exibe" <<endl;
	cout <<"eles em ordem DECRESCENTE" <<endl <<endl;
	
	//declarando variáveis
	int A, B, C, a1;
		
	cout <<"Digite um numero qualquer: "; //Mensagem para o usuário digitar um numero
	cin >> A; //armazendando numero 1
	cout <<"Digite um numero qualquer: "; //Mensagem para o usuário digitar um numero
	cin >> B; //armazendando numero 2
	cout <<"Digite um numero qualquer: "; //Mensagem para o usuário digitar um numero
	cin >> C; //armazendando numero 3
	
	//Inicio da Estrutura de Decisão
	if(A > B)
	{
		a1 = A;
		A = B;
		B = a1;
	}
		if(A > C)
		{
			a1 = A;
			A = C;
			C = a1;
		}
			if (B > C)
			{
				a1 = B;
				B = C;
				C = a1;
			}

	cout <<endl <<"Numeros em ordem decrecente: " <<C <<" , " <<B <<" , " <<A <<endl <<endl;

	system("pause");
}					
	
