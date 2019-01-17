#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 3 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que, tendo como dados de entrada a altura(H) e o" <<endl;
	cout <<"sexo (S) deuma pessoa, calcule e apresente seu peso ideal." <<endl <<endl;
	
	float H, S, P;
	
	cout <<"Digite a sua altura (m): ";
	cin >> H;
	cout <<endl;
	cout <<"Assuma 1 para Masculino" <<endl;
	cout <<"Assuma 2 para Feminino" <<endl <<endl;
	cout <<"Digite o seu sexo: ";
	cin >> S;
	
	if (S == 1)
	{
		P = ((72.7 * H)-58);
	} else{
		P = ((62.1 * H)-44.7);
	}
	cout <<endl;
	cout <<"Seu Peso Ideal seria: " <<P <<" kg." <<endl <<endl;
	system ("pause");
}
