#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

int main()
{
	cout<<"***************** Exercício 24 - SALA *****************" <<endl;
	cout<<"E1P que leia varios numeros que estao entre 100 e 200," <<endl;
	cout<<"quando o valor ZERO for lido o programa devera cessar sua" <<endl;
	cout<<"execucao. Exibindo quantos numeros entre 100 e 200 foram digitados." <<endl <<endl; 
	
	int cont;
	float n;
	
	cout<<"Digite um numero qualquer " <<endl;
	cout<<"Digite 0 para sair: ";
	cin>> n;
	cont=0;
	cout<<endl;
	
	while(n!=0)
	{
		if(n>=100 && n<= 200)
		{
			cont++;
		}
		cout<<"Digite um numero qualquer " <<endl;
		cout<<"Digite 0 para sair: ";
		cin>> n;
		cout<<endl;

	}
	cout<<"O total de numeros digitados entre 100 e 200 eh: " <<cont;
	cout<<endl;
	cout<<endl;cout<<endl;
	system("pause");
}
