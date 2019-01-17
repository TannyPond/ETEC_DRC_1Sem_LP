#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	cout <<"****** Exercicio 14 - Lista ******" <<endl <<endl;
	cout <<"Construa um algoritmo que leia as informacoes de: Horas Trabalhadas (HT)," <<endl;
	cout <<"valor da hora trabalhada (VH). Calcule e apresente o salario liquido do" <<endl;
	cout <<"empregado. " <<endl <<endl;

	float ht, vh, sl, sb, inss, ir, bir;
		
	cout << "Digite a quantidade de horas trabalhadas: ";
	cin >> ht;
	cout << endl;

	cout << "Digite o valor da hora trabalhada: ";
	cin >> vh;
	cout << endl;
	
	sb = ht * vh;
	inss = sb * 0.11;	
	bir = sb - inss;
	
	if(bir <= 1257.12)
	{
		ir = 0.00;
	}else{
		if(bir >= 1257.13 || bir <= 2512.08)
		{
			ir = ((bir * 0.15) - 188.57);
		}else{
			ir = ((bir * 0.275) - 502.58);
		}
	}
	sl = sb - inss - ir;
	cout <<"O Salario liquido do funcionario eh: R$ " <<sl <<endl <<endl;
	
	system ("pause");
}
