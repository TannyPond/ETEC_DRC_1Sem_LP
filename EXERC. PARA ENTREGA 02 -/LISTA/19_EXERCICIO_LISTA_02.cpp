#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{
	cout <<"****** Exercicio 19 - Lista 2******" <<endl <<endl;
	cout <<"Construa um algoritmo que calcule e apresente a idade REAL de uma pessoa." <<endl <<endl;
	
	int dn, mn, an, da, ma, aa, hoje, ant, totaldias, anos, dias, meses;
	
	cout << "Digite o Dia do seu Nascimento (DD): ";
	cin >> dn;
	cout <<endl << "Digite o Mes do seu Nascimento(MM): ";
	cin >> mn;
	cout <<endl << "Digite o Ano do seu Nascimento(AAAA): ";
	cin >> an;
	cout <<endl << "Digite o Dia Atual (DD): ";
	cin >> da;
	cout <<endl << "Digite o Mes Atual (MM): ";
	cin >> ma;
	cout <<endl << "Digite o Ano Atual (AAAA): ";
	cin >> aa;

	ant=dn+(mn*30)+(an*365);
	
	hoje=da+(ma*30)+(aa*365);
	
	totaldias=hoje-ant;
	
	anos=totaldias/365;
	
	meses=(totaldias%365)/30;
	
	dias=(totaldias%365)%30;
	
	cout <<endl << "Voce tem exatamente: " << anos << " anos, " << meses << " meses e " << dias << " dias!" <<endl <<endl;

	system ("pause");
}
