#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 22 - Lista 2******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia o codigo de um determiando produto (CP)" <<endl;
	cout <<"e mostre a sua classificacao." <<endl <<endl;
			
	int cp;
	
	cout <<"Digite o codigo do produto: "; 
	cin >> cp; 
	
	if(cp >=1 && cp <=9)
	{
		if(cp==1)
		{
			cout <<endl <<"Alimento Nao-Perecivel" <<endl <<endl;
		}else{
			if(cp>=2 && cp <=4)
			{
				cout <<endl <<"Alimento Perecivel" <<endl <<endl;
			}else{
				if(cp==5 || cp==6)
				{
					cout <<endl <<"Vestuario" <<endl <<endl;
				}else{
					if(cp==7)
					{
						cout <<endl <<"Higiene Pessoal" <<endl <<endl;
					}else{
						cout <<endl <<"Limpeza e Utensilios Domesticos" <<endl <<endl;
						}
					}
				}
			}
	}else{
			cout <<endl <<"Codigo do produto INVALIDO" <<endl <<endl;
	}
		system("pause");
}
