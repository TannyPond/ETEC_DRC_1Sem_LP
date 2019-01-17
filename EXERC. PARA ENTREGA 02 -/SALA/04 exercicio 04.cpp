#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercício 04 ******" <<endl <<endl;
	cout <<"Elabora um programa em que o usuario entra com o ano de nascimento de uma" <<endl;
	cout <<"pessoa e o ano atual. Nao esqueca de verificar se o ano de nascimento eh valido." <<endl <<endl;
	
	int anon, anoa, idade;
	
	cout <<"Entre com o Ano de Nascimento...  ";
	cin >> anon;
	cout <<"Entre com o Ano Atual...  ";
	cin >> anoa;
	
	if (anon < anoa)
	{
		idade = anoa - anon;
		cout <<endl <<"Voce tem...  " <<idade <<" anos!" <<endl <<endl;
	} else{
		cout <<endl <<"Ano Invalido!" <<endl <<endl;
	}		
	system ("pause");
}
