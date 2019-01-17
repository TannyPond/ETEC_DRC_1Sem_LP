#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 8 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que apresente o nome e o salario dos funcioanrios, de" <<endl;
	cout <<"acordo com os criterios: *Salarios que sejam maiores ou = a R$ 1000 e menores ou " <<endl;
	cout <<"iguais a R$ 1500. *Funcionarios pertencentes aos departamentos de Producao ou " <<endl;
	cout <<"Engenharia." <<endl;
	cout <<"OBS: Os departamentos sao reconhecidos pelas letras P e E. Sao fornceidos os nomes" <<endl;
	cout <<"do funcionario (NF), seu salario (SAL) e o departamento onde trabalha (DEP)" <<endl <<endl <<endl;
			
	float SAL;
	char DEP;
	string NF;
		
	cout << "Digite o nome do funcionario: ";
	cin >> NF;
	cout << endl;

	cout << "Digite o salario do funcionario: R$ ";
	cin >> SAL;
	cout << endl;
	
	
	if(SAL >= 1000 && SAL <= 1500)
		{
			cout << "DEPARTAMENTO:" <<endl <<endl;
			cout << "P - Producao:" <<endl;
			cout << "E - Engenharia:" <<endl;
			cin >> DEP;
			cout << endl;
			
			if (DEP == 'p' || DEP == 'P' || DEP == 'e' || DEP == 'E')
			{		
				cout <<NF <<" recebe R$ " <<SAL <<endl <<endl;
			}
			else
			{
				cout <<"Departamento Invalido!" <<endl <<endl;
			}
	}
	system ("pause");
}
