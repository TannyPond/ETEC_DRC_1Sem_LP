#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 21 - Lista 2******" <<endl <<endl;
	cout <<"Construa um algoritmo que, dada a idade de um nadador (id), classifique-o" <<endl;
	cout <<"em categorias." <<endl <<endl;
			
	int id;
	
	cout <<"Digite a idade do nadador: "; 
	cin >> id; 

	if(id >=5 && id <=7)
	{
		cout <<endl <<"Categoria Infantil A" <<endl <<endl;
	}else{
		if(id >= 8 && id <=10)
		{
			cout <<endl <<"Categoria Infantil B" <<endl <<endl;
		}else{
			if(id >= 11 && id <=13)
			{
				cout <<endl <<"Categoria Juvenil A" <<endl <<endl;
			}else{
				if(id >=14 && id <= 17)
				{
					cout <<endl <<"Categoria Juvenil B" <<endl <<endl;
				}else{
					cout <<endl <<"Categoria Adulto" <<endl <<endl;
				}
			}
		}
	}

	system ("pause");
}
