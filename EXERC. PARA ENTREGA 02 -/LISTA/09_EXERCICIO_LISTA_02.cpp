#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 9 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que calcule o novo salario (SAL_NOVO) de um" <<endl;
	cout <<"funcionario. Considere que o funcionario devera receber um reajuste de" <<endl;
	cout <<"15% caso seu salario (SAL) seja menor que R$ 500. Se o salario for maior" <<endl;
	cout <<"ou igual a R$ 500, mas menor ou igual a R$ 1.000, o reajuste deve ser de" <<endl;
	cout <<"10%. Caso o salario seja maior que R$ 1.000, o reajuste deve serrr de 5%." <<endl <<endl;
			
	float Sal, Sal_Novo;
		
	cout << "Digite o salario do funcionario: R$ ";
	cin >> Sal;
	cout << endl;

	if (Sal<500)
	{
		Sal_Novo = (Sal*1.15);
	}
	else{
		if(Sal>=500 || Sal<=1000)
		{
			Sal_Novo = (Sal*1.1);
		}else{
			Sal_Novo = (Sal*1.05);
		}
	}
	cout << "O Salario atual com reajuste eh R$ " <<Sal_Novo <<endl <<endl;
	system ("pause");
}
