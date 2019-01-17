#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 12 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que receba a leitura do termomentro (T)." <<endl;
	cout <<"Caso a temperatura esteja abaixo de 100C, apresentar a mensagem" <<endl;
	cout <<"de que a temperatura esta muito baixa. Caso a temperatura esteja" <<endl;
	cout <<"entre 100C e 200C (inclusive), apresentar a mesnagem de que a " <<endl;
	cout <<"temperatura esta baixa. Caso a temperatura esteja acima de 200C e " <<endl;
	cout <<"inferior a 500C, apresentar a mensagem de que a temperatura esta normal." <<endl;
	cout <<"Caso contrario, apresentar a mensagem de que a temperatura esta muito alta" <<endl <<endl;
			
	float T;
		
	cout << "Digite a temperatura (oC): ";
	cin >> T;
	cout << endl;

	if(T < 100)
		{
			cout <<"Temperatura MUITO BAIXA" <<endl <<endl;
		}else{
			if(T >= 100 && T <= 200)
			{
				cout <<"Temperatura BAIXA" <<endl <<endl;
			}
			else{
				if(T >200 && T <= 500)
				{
					cout <<"Temperatura NORMAL" <<endl <<endl;
				}else{
					cout <<"Temperatura MUITO ALTA" <<endl <<endl;
				}
			}
		}
		system ("pause");
}
