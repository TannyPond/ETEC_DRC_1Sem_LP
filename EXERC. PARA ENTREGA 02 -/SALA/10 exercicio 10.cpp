#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	// Programa em que o usuario digita um numero. Devar� ser informado se o numero �:
	// NEGATIVO, POSITIVO, OU ZERO
	cout << "****EXERCIO 10 - SALA****" << endl << endl << endl; 
	
	//declarando vari�veis
	int n1;
		
	cout <<"Digite um numero qualquer: "; //Mensagem para o usu�rio digitar um numero
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
	
