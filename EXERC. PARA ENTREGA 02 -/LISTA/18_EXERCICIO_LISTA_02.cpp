#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 18 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia o ano de nascimento de uma pessoa (AN)" <<endl;
	cout <<"e mostre a sua idade e, tambem verifique e mostre se essa pessoa ja tem" <<endl;
	cout <<"iade para votar (16 ou mais) e se ja pode conseguir sua CNH (18 ou mais)." <<endl <<endl;
			
	int an, i;
		
	cout << "Digite o ano do seu nascimento (AAAA): ";
	cin >> an;
	cout << endl;
	
	i = 2018 - an;
	
	if(an <=2018)
	{
		if(i >=16 && i >=18)
		{
			cout <<"Voce tem " <<i <<" anos e tem idade para votar e tirar sua CNF" <<endl <<endl;
			}else{
				if (i >=16 && i <18)
				{
					cout <<"Voce tme " <<i <<" anos e tem idade para votar." <<endl <<endl;
				}else{
					cout <<"Não tem idade suficiente para votar!" <<endl <<endl;
				}
			}
	}else{
		cout <<"Ano invalido!" <<endl <<endl;
	}
	system ("pause");
}
