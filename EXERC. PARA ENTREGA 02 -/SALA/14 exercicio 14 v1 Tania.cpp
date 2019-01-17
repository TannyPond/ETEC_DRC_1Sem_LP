#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
	// E1P que leia a data no seguinte formato DDMMAAAA, e exiba se a data é valida ou não
	cout << "****EXERCIO 14 - SALA****" << endl << endl << endl; 
	
	//declarando variáveis
	int data, anoun, anodez, anocent, anomil, ano, mesun, mesdez, mes, diaun, diadez, dia, anobisx;
	
	cout <<"Digite uma data qualquer (DDMMAAAA): ";
	cin >> data;
	
	anoun = data/10000000;
	anodez = (data%10000000)/1000000;
	anocent = (data%1000000)/100000;
	anomil = (data%100000)/10000;
	ano = (anomil*1000+anocent*100+anodez*10+anoun);
	anobisx = ano%4;
	
	mesun = (data%10000)/1000;
	mesdez = (data%1000)/100;
	mes =(mesdez*10+mesun);
	
	diaun = (data%100)/10;
	diadez = (data%10)/1;
	dia = (diadez*10+diaun);
	
	if (mes == 4 && mes == 6 && mes == 9 && mes == 11 && dia > 0 && dia <= 30 && ano > 0)
	{
		cout <<endl <<"DATA VALIDA!!!" <<endl <<endl;
	}
	else
	{
		if(mes == 2 && dia > 0 && dia <= 28 && ano > 0)
		{
			cout <<endl <<"DATA VALIDA!!!" <<endl <<endl;
		}
		if(mes ==2 && anobisx == 0 && dia <=29)
		{
			cout <<endl <<"DATA VALIDA!!!" <<endl <<endl;
		}else
		{
			if (mes == 1 && mes == 3 && mes == 5 && mes == 7 && mes == 8 && mes == 10 && mes == 12 && dia > 0 && dia <= 31 && ano > 0)
			{
				cout <<endl <<"DATA VALIDA!!!" <<endl <<endl;
			}
			else
			{
				cout <<endl <<"NAO EH UMA DATA VALIDA" <<endl <<endl;
			}
		}
	}
	system ("pause");
}
	
	
