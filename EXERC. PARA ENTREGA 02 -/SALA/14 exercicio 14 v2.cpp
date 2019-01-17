#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	// E1P que leia a data no seguinte formato DDMMAAAA, e exiba se a data é valida ou não
	cout << "****EXERCICIO 14(v2) - SALA****" << endl << endl << endl; 
	
	//declarando variáveis
	int data, ano, mes, dia, anob1, anob2, anob3,vd;
	
	cout <<"\n Data no formato DDAAMMMM: "; 
	cin >>data;
	
	dia = data / 1000000;
	mes = data % 1000000 / 10000;
	ano = data % 10000;
	
	anob1 = ano % 4 ;
	anob2 = ano % 100;
	anob3 = ano % 400;
	
	if (ano >=1)
	{
		vd = 1;
		if (mes > 12 || dia < 1 || dia > 31)
		{
			vd = 0;
		}
		else
		{
			if((mes == 4 || mes ==6 || mes == 9 || mes == 11) && dia > 30)
			{
				vd = 0;
			}
			else
			{
				if(mes == 2)
				{
					if((anob1 == 0 && anob2 != 0) || anob3 == 0)
					{
						if(dia >29)
						{
							vd =0;
						}
					}
					else
					{
						if(dia > 28)
						{
							vd =0;
						}
					}
				}	
			}
		}
	}
	else
	{
		vd = 0;
	}
	if (vd == 0)
	{
		cout <<"\nData Invalida!" <<endl <<endl;
	}
	else
	{
		cout <<"\nData Valida!" <<endl <<endl;
	}
	system("pause");
}
