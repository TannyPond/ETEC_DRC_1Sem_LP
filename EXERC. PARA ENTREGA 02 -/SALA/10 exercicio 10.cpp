#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	// Programa em que o usuario digita um numero. Devará ser informado se o numero é:
	// NEGATIVO, POSITIVO, OU ZERO
	cout << "****EXERCIO 10 - SALA****" << endl << endl << endl; 
	
	//declarando variáveis
	int n1;
		
	cout <<"Digite um numero qualquer: "; //Mensagem para o usuário digitar um numero
	cin >> n1; //armazendando numero 1
	
	if(n1 == 0)
	{
		cout <<endl <<"ZERO" <<endl <<endl;
	}else{
		if(n1 > 0)
		{
			cout <<endl <<"POSITIVO" <<endl <<endl;
		}else{
			cout <<endl <<"NEGATIVO" <<endl <<endl;
		}
	}
	system("pause");
}
	
