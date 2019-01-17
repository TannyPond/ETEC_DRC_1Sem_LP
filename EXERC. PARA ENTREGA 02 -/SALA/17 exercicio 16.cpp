#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main ()
{
	//E1P em que o usuário entra com 2 numeros e escolhe entre uma das 4 opeações matamáticas básicas e potencia e radiciação, 
	//retornando o resultado da operação em tela.
	cout << "****EXERCICIO 16 - (CALCULADORA CIENTIFICA)****" << endl << endl << endl; 
	
	float n1,n2, op, opr, opp;
	int choice;
			
	cout <<"****************************"<<endl;	
	cout <<"***CALCULADORA CIENTIFICA***"<<endl;
	cout <<"*         Adicao - 1       *"<<endl;
	cout <<"*       Subtracao - 2      *"<<endl;
	cout <<"*     Multiplicacao - 3    *"<<endl;
	cout <<"*        Divisao - 4       *"<<endl;
	cout <<"*      Radiciacao - 5      *"<<endl;
	cout <<"*     Potenciacao - 6      *"<<endl;
	cout <<"****************************"<<endl <<endl;
	cout <<"Escolha a operacao matematica: ";
	cin >> choice;

	if(choice >0 && choice <7)
	{
		cout <<endl <<"Digite o 1o numero: ";
		cin >> n1;
		cout <<endl <<"Digite o 2o numero: "; 
		cin >> n2;
		
		switch(choice)
		{
			case 1:
				op = n1 + n2;
				cout <<endl;
				cout << "A soma eh: " <<op <<endl <<endl;
				break; //pára no caso 1
		
			case 2:
				op = n1 - n2;
				cout <<endl;
				cout << "A subtracao eh: " <<op <<endl <<endl;
				break; //pára no caso 1
	
			case 3:
				op = n1 * n2;
				cout <<endl;
				cout << "A multiplicacao eh: " <<op <<endl <<endl;
				break; //pára no caso 1
				
			case 4:
				if(n2 ==0)
				{
					op = 0;
					cout <<endl;
					cout << "A divisao eh infinita: " <<op <<endl <<endl;
				}
				else
				{
					op = n1 / n2;
					cout <<endl;
					cout << "A divisao eh: " <<op <<endl <<endl;
					break; //pára no caso 1
				}
				
			case 5:
				if(n1 > 0 || n2 >0)
				{
					op = sqrt (n1);
					opr = sqrt (n2);
					cout <<endl <<"A raiz quadrada dos numeros digitados sao: " <<op <<", " <<opr <<endl <<endl;
				}
				else
				{
					cout <<endl <<"Nao se pode realizar a operacao!" <<endl <<endl;
				}
					break;
			
			case 6:
				op = pow(n1,2);
				opp = pow(n2,2);
				cout <<endl <<"A potencia dos numeros digitados eh: " <<op <<", " <<opp <<endl <<endl;
				break; //pára no caso 1	
			
			default:
				cout <<endl <<"Operaccao Invalida!" <<endl <<endl;
				break;
			}
	}
	else
	{
		cout <<endl <<"Operacao Invalida" <<endl <<endl;
	}
	system ("pause");
}
			
			
			
			
