#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
	//E1P em que o usuário entra com 2 numeros e escolhe entre uma das 4 opeações matemáticas básicas, 
	//retornando o resultado da operação em tela.
	cout << "****EXERCICIO 15 - SALA (CALCULADORA)****" << endl << endl << endl; 
	
	float n1,n2, choice, op;
			
	
	cout <<"Escolha a operacao matematica: " <<endl <<endl;
	
	cout <<"Adicao - 1" <<endl;
	cout <<"Subtracao - 2"<<endl;
	cout <<"Multiplicacao - 3"<<endl;
	cout <<"Divisao - 4"<<endl <<endl;
	
	cin >> choice;
	
	if(choice >0 && choice <5)
	{
		cout <<endl <<"Digite o 1o numero: ";
		cin >> n1;
		cout <<endl <<"Digite o 2o numero: "; 
		cin >> n2;
		
		if (choice == 1)
		{
			op = n1 + n2;	
		}
		else
		{	
			if(choice == 2)
			{
				op = n1 - n2;
			}
			else
			{
				if(choice == 3)
				{
					op = n1 * n2;
				}
				else
				{
					if(choice == 4 && n2 == 0)
					{
						cout <<"Impossivel, pois nao pode haver divisao por 0!" <<endl <<endl;
						op=0;
					}
					else
					{
						op = n1 / n2;
					}
				}
			}
		
		}
		cout <<endl <<endl <<"O resultado da operacao eh: " <<op <<endl <<endl;
	}
	else
	{
		cout <<endl <<endl <<"Nao existe essa opcao, tente novamente!"<<endl <<endl;
	}

	system ("pause");
	
}



